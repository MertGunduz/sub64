add_executable(praiselang praiselang.c)

target_link_libraries(praiselang praiselanglib base64)

# INSTALL THE EXECUTABLE TO USR/BIN
install(
    TARGETS praiselang
    DESTINATION /usr/local/bin/
)