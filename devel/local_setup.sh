#!/usr/bin/env sh
# generated from catkin/cmake/template/local_setup.sh.in

# since this file is sourced either use the provided _CATKIN_SETUP_DIR
# or fall back to the destination set at configure time
<<<<<<< HEAD
: ${_CATKIN_SETUP_DIR:=/home/dean/ws_assn1/devel}
=======
: ${_CATKIN_SETUP_DIR:=/home/dean/ws_assn2/devel}
>>>>>>> 26b8561343d97326ee66bd1e35d29ffbe8765848
CATKIN_SETUP_UTIL_ARGS="--extend --local"
. "$_CATKIN_SETUP_DIR/setup.sh"
unset CATKIN_SETUP_UTIL_ARGS
