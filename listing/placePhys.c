.vmlist = {{.colors = 0b00000011,
	      .platform = {.region_num = 2,
			   .regions = (struct vm_mem_region[]){
			     {.base = VM1_MEM1_BASE,
			      .size = VM1_MEM1_SIZE,
			      .place_phys = true,
			      .phys = VM1_MEM1_BASE},
			     {.base = VM1_MEM2_BASE,
			      .size = VM1_MEM2_SIZE,
			      .place_phys = true,
			      .phys = VM1_MEM2_BASE}},
	      }}
