#Define targets
set(TLIST temperature precedence intdivision modulus sizeof decision ternary compare assignment assignment2 assignment3
        assignment4)

#iterate through all targets
    foreach (T IN ITEMS ${TLIST}) set(TNAME "${T}")
        add_executable($ { TNAME } "${CMAKE_CURRENT_SOURCE_DIR}/${TNAME}.cpp") endforeach()
