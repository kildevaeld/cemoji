
set(SOURCES
    emoji_data.c
    emoji.c
)

add_library(cemoji ${SOURCES})
target_include_directories(cemoji PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

if (CEMOJI_BUILD_EXAMPLE)
    add_executable(cemoji_bin main.c)
    target_link_libraries(cemoji_bin cemoji)
    set_target_properties(cemoji_bin PROPERTIES OUTPUT_NAME "cemoji")
endif(CEMOJI_BUILD_EXAMPLE)