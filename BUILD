cc_test(
    name = "test",
    srcs = [
        "test.cpp",
    ],
    copts = [
        "-std=c++17",
        "-mmacosx-version-min=10.15",
    ],
    data = ["test.txt"],
    deps = [
        "@googletest//:gtest_main",
    ],
)
