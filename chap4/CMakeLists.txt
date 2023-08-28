#Define targets
set(TLIST ifelse ifelse2 zipifelse)

#iterate through all targets
    foreach (T IN ITEMS ${TLIST}) set(TNAME "${T}")
        add_executable($ { TNAME } "${CMAKE_CURRENT_SOURCE_DIR}/${TNAME}.cpp") endforeach()
