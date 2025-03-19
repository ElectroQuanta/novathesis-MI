#!/bin/sh
gst-launch-1.0 -v udpsrc port=5000 caps="application/x-rtp,media=video,encoding-name=H264,payload=96" ! queue ! rtph264depay ! queue ! avdec_h264 ! queue ! videoconvert ! queue ! autovideosink sync=false
