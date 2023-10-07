<<<<<<< HEAD
# Install script for directory: /home/dean/ws_assn1/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/dean/ws_assn1/install")
=======
# Install script for directory: /home/dean/ws_assn2/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/dean/ws_assn2/install")
>>>>>>> 26b8561343d97326ee66bd1e35d29ffbe8765848
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
<<<<<<< HEAD
   "/home/dean/ws_assn1/install/_setup_util.py")
=======
   "/home/dean/ws_assn2/install/_setup_util.py")
>>>>>>> 26b8561343d97326ee66bd1e35d29ffbe8765848
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
<<<<<<< HEAD
file(INSTALL DESTINATION "/home/dean/ws_assn1/install" TYPE PROGRAM FILES "/home/dean/ws_assn1/build/catkin_generated/installspace/_setup_util.py")
=======
file(INSTALL DESTINATION "/home/dean/ws_assn2/install" TYPE PROGRAM FILES "/home/dean/ws_assn2/build/catkin_generated/installspace/_setup_util.py")
>>>>>>> 26b8561343d97326ee66bd1e35d29ffbe8765848
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
<<<<<<< HEAD
   "/home/dean/ws_assn1/install/env.sh")
=======
   "/home/dean/ws_assn2/install/env.sh")
>>>>>>> 26b8561343d97326ee66bd1e35d29ffbe8765848
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
<<<<<<< HEAD
file(INSTALL DESTINATION "/home/dean/ws_assn1/install" TYPE PROGRAM FILES "/home/dean/ws_assn1/build/catkin_generated/installspace/env.sh")
=======
file(INSTALL DESTINATION "/home/dean/ws_assn2/install" TYPE PROGRAM FILES "/home/dean/ws_assn2/build/catkin_generated/installspace/env.sh")
>>>>>>> 26b8561343d97326ee66bd1e35d29ffbe8765848
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
<<<<<<< HEAD
   "/home/dean/ws_assn1/install/setup.bash;/home/dean/ws_assn1/install/local_setup.bash")
=======
   "/home/dean/ws_assn2/install/setup.bash;/home/dean/ws_assn2/install/local_setup.bash")
>>>>>>> 26b8561343d97326ee66bd1e35d29ffbe8765848
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
<<<<<<< HEAD
file(INSTALL DESTINATION "/home/dean/ws_assn1/install" TYPE FILE FILES
    "/home/dean/ws_assn1/build/catkin_generated/installspace/setup.bash"
    "/home/dean/ws_assn1/build/catkin_generated/installspace/local_setup.bash"
=======
file(INSTALL DESTINATION "/home/dean/ws_assn2/install" TYPE FILE FILES
    "/home/dean/ws_assn2/build/catkin_generated/installspace/setup.bash"
    "/home/dean/ws_assn2/build/catkin_generated/installspace/local_setup.bash"
>>>>>>> 26b8561343d97326ee66bd1e35d29ffbe8765848
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
<<<<<<< HEAD
   "/home/dean/ws_assn1/install/setup.sh;/home/dean/ws_assn1/install/local_setup.sh")
=======
   "/home/dean/ws_assn2/install/setup.sh;/home/dean/ws_assn2/install/local_setup.sh")
>>>>>>> 26b8561343d97326ee66bd1e35d29ffbe8765848
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
<<<<<<< HEAD
file(INSTALL DESTINATION "/home/dean/ws_assn1/install" TYPE FILE FILES
    "/home/dean/ws_assn1/build/catkin_generated/installspace/setup.sh"
    "/home/dean/ws_assn1/build/catkin_generated/installspace/local_setup.sh"
=======
file(INSTALL DESTINATION "/home/dean/ws_assn2/install" TYPE FILE FILES
    "/home/dean/ws_assn2/build/catkin_generated/installspace/setup.sh"
    "/home/dean/ws_assn2/build/catkin_generated/installspace/local_setup.sh"
>>>>>>> 26b8561343d97326ee66bd1e35d29ffbe8765848
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
<<<<<<< HEAD
   "/home/dean/ws_assn1/install/setup.zsh;/home/dean/ws_assn1/install/local_setup.zsh")
=======
   "/home/dean/ws_assn2/install/setup.zsh;/home/dean/ws_assn2/install/local_setup.zsh")
>>>>>>> 26b8561343d97326ee66bd1e35d29ffbe8765848
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
<<<<<<< HEAD
file(INSTALL DESTINATION "/home/dean/ws_assn1/install" TYPE FILE FILES
    "/home/dean/ws_assn1/build/catkin_generated/installspace/setup.zsh"
    "/home/dean/ws_assn1/build/catkin_generated/installspace/local_setup.zsh"
=======
file(INSTALL DESTINATION "/home/dean/ws_assn2/install" TYPE FILE FILES
    "/home/dean/ws_assn2/build/catkin_generated/installspace/setup.zsh"
    "/home/dean/ws_assn2/build/catkin_generated/installspace/local_setup.zsh"
>>>>>>> 26b8561343d97326ee66bd1e35d29ffbe8765848
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
<<<<<<< HEAD
   "/home/dean/ws_assn1/install/.rosinstall")
=======
   "/home/dean/ws_assn2/install/.rosinstall")
>>>>>>> 26b8561343d97326ee66bd1e35d29ffbe8765848
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
<<<<<<< HEAD
file(INSTALL DESTINATION "/home/dean/ws_assn1/install" TYPE FILE FILES "/home/dean/ws_assn1/build/catkin_generated/installspace/.rosinstall")
=======
file(INSTALL DESTINATION "/home/dean/ws_assn2/install" TYPE FILE FILES "/home/dean/ws_assn2/build/catkin_generated/installspace/.rosinstall")
>>>>>>> 26b8561343d97326ee66bd1e35d29ffbe8765848
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
<<<<<<< HEAD
  include("/home/dean/ws_assn1/build/gtest/cmake_install.cmake")
  include("/home/dean/ws_assn1/build/assn1/cmake_install.cmake")
=======
  include("/home/dean/ws_assn2/build/gtest/cmake_install.cmake")
  include("/home/dean/ws_assn2/build/assn2/cmake_install.cmake")
>>>>>>> 26b8561343d97326ee66bd1e35d29ffbe8765848

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
<<<<<<< HEAD
file(WRITE "/home/dean/ws_assn1/build/${CMAKE_INSTALL_MANIFEST}"
=======
file(WRITE "/home/dean/ws_assn2/build/${CMAKE_INSTALL_MANIFEST}"
>>>>>>> 26b8561343d97326ee66bd1e35d29ffbe8765848
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
