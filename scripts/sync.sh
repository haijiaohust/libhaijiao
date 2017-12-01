#!/bin/bash
###
#sync all caches
###
sync; echo 3 > /proc/sys/vm/drop_caches
