# cmake_minimum_required(VERSION 3.20)
# project(main VERSION 1.0)
# add_subdirectory(lib/list)

# #add_executable(main main.c lib/list/list.c)

# 采用添加库的方式

# cmake_minimum_required(VERSION 3.20)
# project(main VERSION 1.0)

# add_subdirectory(lib/list)

# add_executable(main main.c)
# target_link_libraries(main PRIVATE list)  # 链接 lib/list 目录下的 list 库
# target_include_directories(main PRIVATE lib/list)
#**************************************************************
# cmake_minimum_required(VERSION 3.20)
# project(TEST VERSION 1.0)
# #设置路径
# set(PROJECT_ROOT     ${CMAKE_CURRENT_SOURCE_DIR})
# set(LIST_ROOT       ${PROJECT_ROOT}/lib/list)
# set(ARRAY_PATH      ${PROJECT_ROOT}/lib/array)

# #添加子文件夹
# add_subdirectory(lib/list)
# add_subdirectory(lib/array)

# add_executable(main main.c)

# target_link_libraries(main PRIVATE list array) 
# target_include_directories(main PRIVATE ${LIST_ROOT} ${ARRAY_PATH})
#****************************************************************
# 不同程序切换
 cmake_minimum_required(VERSION 3.20)
 project(TEST VERSION 1.0)
 set(PROJECT_ROOT     ${CMAKE_CURRENT_SOURCE_DIR})
 set(USER_PROJECT projectA)
 #set(USER_PROJECT projectB)
 add_subdirectory(${PROJECT_ROOT}/example/${USER_PROJECT})
#*******************选项*************************************************
option(USER_TEST ON)
message("The value is ${USER_TEST}")
if(USER_TEST)
    message("priint hello")
endif()
#message("hello")