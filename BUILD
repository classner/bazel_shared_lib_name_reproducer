cc_library(
    name = "bazel_shared_lib_name_reproducer_lib",
    srcs = ["test.cpp"],
)

# Crashes.
# FATAL: bazel crashed due to an internal error. Printing stack trace:
# java.lang.RuntimeException: Unrecoverable error while evaluating node 'ConfiguredTargetKey{label=//:bazel_data_reproducer, config=BuildConfigurationKey[096dcc84165363e69a851ebe8131b032f5448c94ddc4951775429dc78e79f898]}' (requested by nodes 'ConfiguredTargetKey{label=//:bazel_data_reproducer, config=BuildConfigurationKey[8e4ab22e89843aa348ba782be25eadb5bae40f2ae62dec3edd2cdaf809e8d7b1]}')
#         at com.google.devtools.build.skyframe.AbstractParallelEvaluator$Evaluate.run(AbstractParallelEvaluator.java:550)
#         at com.google.devtools.build.lib.concurrent.AbstractQueueVisitor$WrappedRunnable.run(AbstractQueueVisitor.java:414)
#         at java.base/java.util.concurrent.ForkJoinTask$RunnableExecuteAction.exec(Unknown Source)
#         at java.base/java.util.concurrent.ForkJoinTask.doExec(Unknown Source)
#         at java.base/java.util.concurrent.ForkJoinPool$WorkQueue.topLevelExec(Unknown Source)
#         at java.base/java.util.concurrent.ForkJoinPool.scan(Unknown Source)
#         at java.base/java.util.concurrent.ForkJoinPool.runWorker(Unknown Source)
#         at java.base/java.util.concurrent.ForkJoinWorkerThread.run(Unknown Source)
# Caused by: net.starlark.java.eval.Starlark$UncheckedEvalException: IllegalArgumentException thrown during Starlark evaluation (//:bazel_data_reproducer)
#         at <starlark>.link(<builtin>:0)
#         at <starlark>._link(/virtual_builtins_bzl/common/cc/cc_common.bzl:144)
#         at <starlark>._cc_shared_library_impl(/virtual_builtins_bzl/common/cc/cc_shared_library.bzl:718)
# Caused by: java.lang.IllegalArgumentException
#         at com.google.common.base.Preconditions.checkArgument(Preconditions.java:129)
#         at com.google.devtools.build.lib.rules.cpp.SolibSymlinkAction.getDynamicLibrarySymlinkInternal(SolibSymlinkAction.java:216)
#         at com.google.devtools.build.lib.rules.cpp.SolibSymlinkAction.getDynamicLibrarySymlink(SolibSymlinkAction.java:150)
#         at com.google.devtools.build.lib.rules.cpp.CcLinkingHelper.getDynamicLibrarySolibSymlinkOutput(CcLinkingHelper.java:1020)
#         at com.google.devtools.build.lib.rules.cpp.CcLinkingHelper.createDynamicLinkAction(CcLinkingHelper.java:803)
#         at com.google.devtools.build.lib.rules.cpp.CcLinkingHelper.createCcLinkActions(CcLinkingHelper.java:467)
#         at com.google.devtools.build.lib.rules.cpp.CcLinkingHelper.link(CcLinkingHelper.java:375)
#         at com.google.devtools.build.lib.rules.cpp.CcModule.link(CcModule.java:2530)
#         at java.base/jdk.internal.reflect.DirectMethodHandleAccessor.invoke(Unknown Source)
#         at java.base/java.lang.reflect.Method.invoke(Unknown Source)
#         at net.starlark.java.eval.MethodDescriptor.call(MethodDescriptor.java:178)
#         at net.starlark.java.eval.BuiltinFunction.fastcall(BuiltinFunction.java:78)
#         at net.starlark.java.eval.Starlark.fastcall(Starlark.java:806)
#         at net.starlark.java.eval.Eval.evalCall(Eval.java:682)
#         at net.starlark.java.eval.Eval.eval(Eval.java:497)
#         at net.starlark.java.eval.Eval.execReturn(Eval.java:249)
#         at net.starlark.java.eval.Eval.exec(Eval.java:288)
#         at net.starlark.java.eval.Eval.execStatements(Eval.java:82)
#         at net.starlark.java.eval.Eval.execFunctionBody(Eval.java:66)
#         at net.starlark.java.eval.StarlarkFunction.fastcall(StarlarkFunction.java:179)
#         at net.starlark.java.eval.Starlark.fastcall(Starlark.java:806)
#         at net.starlark.java.eval.Eval.evalCall(Eval.java:682)
#         at net.starlark.java.eval.Eval.eval(Eval.java:497)
#         at net.starlark.java.eval.Eval.execAssignment(Eval.java:109)
#         at net.starlark.java.eval.Eval.exec(Eval.java:268)
#         at net.starlark.java.eval.Eval.execStatements(Eval.java:82)
#         at net.starlark.java.eval.Eval.execFunctionBody(Eval.java:66)
#         at net.starlark.java.eval.StarlarkFunction.fastcall(StarlarkFunction.java:179)
#         at net.starlark.java.eval.Starlark.fastcall(Starlark.java:806)
#         at com.google.devtools.build.lib.analysis.starlark.StarlarkRuleConfiguredTargetUtil.evalRule(StarlarkRuleConfiguredTargetUtil.java:100)
#         at com.google.devtools.build.lib.analysis.ConfiguredTargetFactory.createRule(ConfiguredTargetFactory.java:376)
#         at com.google.devtools.build.lib.analysis.ConfiguredTargetFactory.createConfiguredTarget(ConfiguredTargetFactory.java:194)
#         at com.google.devtools.build.lib.skyframe.SkyframeBuildView.createConfiguredTarget(SkyframeBuildView.java:1308)
#         at com.google.devtools.build.lib.skyframe.ConfiguredTargetFunction.createConfiguredTarget(ConfiguredTargetFunction.java:385)
#         at com.google.devtools.build.lib.skyframe.ConfiguredTargetFunction.compute(ConfiguredTargetFunction.java:312)
#         at com.google.devtools.build.skyframe.AbstractParallelEvaluator$Evaluate.run(AbstractParallelEvaluator.java:461)
#         at com.google.devtools.build.lib.concurrent.AbstractQueueVisitor$WrappedRunnable.run(AbstractQueueVisitor.java:414)
#         at java.base/java.util.concurrent.ForkJoinTask$RunnableExecuteAction.exec(Unknown Source)
#         at java.base/java.util.concurrent.ForkJoinTask.doExec(Unknown Source)
#         at java.base/java.util.concurrent.ForkJoinPool$WorkQueue.topLevelExec(Unknown Source)
#         at java.base/java.util.concurrent.ForkJoinPool.scan(Unknown Source)
#         at java.base/java.util.concurrent.ForkJoinPool.runWorker(Unknown Source)
#         at java.base/java.util.concurrent.ForkJoinWorkerThread.run(Unknown Source)
cc_shared_library(
    name = "bazel_shared_lib_name_reproducer",
    shared_lib_name = "picked.name",
    deps = [":bazel_shared_lib_name_reproducer_lib"],
)

# Works.
cc_shared_library(
    name = "bazel_shared_lib_name_reproducer_so",
    shared_lib_name = "picked.so",
    deps = [":bazel_shared_lib_name_reproducer_lib"],
)

# Works.
cc_shared_library(
    name = "bazel_shared_lib_name_reproducer_dll",
    shared_lib_name = "picked.dll",
    deps = [":bazel_shared_lib_name_reproducer_lib"],
)
