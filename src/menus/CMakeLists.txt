set(SOURCES
    help_menu.c
    version_menu.c
    github_menu.c
)

add_library(sub64_menus STATIC ${SOURCES})