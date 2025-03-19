#!/bin/sh
gst-launch-1.0 -v v4l2src device=/dev/video2 ! image/jpeg,width=640,height=480,framerate=30/1 ! jpegdec ! videoconvert ! x264enc bitrate=10000 tune=zerolatency ! rtph264pay config-interval=10 pt=96 ! udpsink host=192.168.1.37 port=5000
