################################################################################
#Yume Engine MIT License (MIT)

# Copyright (c) 2015 arkenthera
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# File : CMakeLists.txt
# Date : 8.27.2015
# Comments :
################################################################################

#Minimal application with empty window
add_subdirectory(HelloWorld)

add_subdirectory(Shadows)

add_subdirectory(Lighting)

add_subdirectory(CefTest)

add_subdirectory(Playground)

add_subdirectory(AmbientOcclusion1)

add_subdirectory(GodRays)

add_subdirectory(SponzaNormal)

add_subdirectory(PostProcessing)

add_subdirectory(RotatingCube)

add_subdirectory(FrustumCulling)

add_subdirectory(ModelViewer)

if(NOT OS_MACOSX)
  #add_subdirectory(TestSuite)
endif()
