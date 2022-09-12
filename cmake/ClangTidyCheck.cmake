find_program(CLANG_TIDY_EXE
    NAMES
        "clang-tidy-12"
        "clang-tidy-6.0"
        "clang-tidy"
    REQUIRED
)

set(CMAKE_CXX_CLANG_TIDY "${CLANG_TIDY_EXE}")
