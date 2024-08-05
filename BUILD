cc_test(
    name = "test",
    srcs = [
        "test.cpp",
    ],
    copts = select({
        "@platforms//os:osx": [
            "-std=c++17",
            "-mmacosx-version-min=10.15",
        ],
        "@platforms//os:windows": [
            "/std:c++17",
        ],
        "@platforms//os:linux": [
            "-std=c++17",
        ],
    }),
    data = ["test.txt"],
    deps = [
        "@googletest//:gtest_main",
    ],
)
