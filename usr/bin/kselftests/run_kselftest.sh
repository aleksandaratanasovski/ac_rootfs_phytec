#!/bin/bash
cd $(dirname $0)
ROOT=$PWD
echo ; echo Running tests in capabilities
echo ========================================
cd capabilities
(./test_execve && echo "selftests: test_execve [PASS]") || echo "selftests: test_execve [FAIL]"
cd $ROOT
echo ; echo Running tests in cpu-hotplug
echo ========================================
cd cpu-hotplug
(./cpu-on-off-test.sh && echo "selftests: cpu-on-off-test.sh [PASS]") || echo "selftests: cpu-on-off-test.sh [FAIL]"
cd $ROOT
echo ; echo Running tests in efivarfs
echo ========================================
cd efivarfs
(./efivarfs.sh && echo "selftests: efivarfs.sh [PASS]") || echo "selftests: efivarfs.sh [FAIL]"
cd $ROOT
echo ; echo Running tests in exec
echo ========================================
cd exec
(./execveat && echo "selftests: execveat [PASS]") || echo "selftests: execveat [FAIL]"
cd $ROOT
echo ; echo Running tests in firmware
echo ========================================
cd firmware
(./fw_filesystem.sh && echo "selftests: fw_filesystem.sh [PASS]") || echo "selftests: fw_filesystem.sh [FAIL]"
(./fw_userhelper.sh && echo "selftests: fw_userhelper.sh [PASS]") || echo "selftests: fw_userhelper.sh [FAIL]"
cd $ROOT
echo ; echo Running tests in ftrace
echo ========================================
cd ftrace
(./ftracetest && echo "selftests: ftracetest [PASS]") || echo "selftests: ftracetest [FAIL]"
cd $ROOT
echo ; echo Running tests in futex
echo ========================================
cd futex
./run.sh
cd $ROOT
echo ; echo Running tests in kcmp
echo ========================================
cd kcmp
(./kcmp_test && echo "selftests: kcmp_test [PASS]") || echo "selftests: kcmp_test [FAIL]"
cd $ROOT
echo ; echo Running tests in lib
echo ========================================
cd lib
(./printf.sh && echo "selftests: printf.sh [PASS]") || echo "selftests: printf.sh [FAIL]"
(./bitmap.sh && echo "selftests: bitmap.sh [PASS]") || echo "selftests: bitmap.sh [FAIL]"
cd $ROOT
echo ; echo Running tests in membarrier
echo ========================================
cd membarrier
(./membarrier_test && echo "selftests: membarrier_test [PASS]") || echo "selftests: membarrier_test [FAIL]"
cd $ROOT
echo ; echo Running tests in memfd
echo ========================================
cd memfd
(./memfd_test && echo "selftests: memfd_test [PASS]") || echo "selftests: memfd_test [FAIL]"
cd $ROOT
echo ; echo Running tests in memory-hotplug
echo ========================================
cd memory-hotplug
./mem-on-off-test.sh -r 2 || echo selftests: memory-hotplug [FAIL]
cd $ROOT
echo ; echo Running tests in mount
echo ========================================
cd mount
if [ -f /proc/self/uid_map ] ; then ./unprivileged-remount-test ; else echo WARN: No /proc/self/uid_map exist, test skipped. ; fi
cd $ROOT
echo ; echo Running tests in mqueue
echo ========================================
cd mqueue
./mq_open_tests /test1 || echo "selftests: mq_open_tests [FAIL]"
./mq_perf_tests || echo "selftests: mq_perf_tests [FAIL]"
cd $ROOT
echo ; echo Running tests in net
echo ========================================
cd net
(./run_netsocktests && echo "selftests: run_netsocktests [PASS]") || echo "selftests: run_netsocktests [FAIL]"
(./run_afpackettests && echo "selftests: run_afpackettests [PASS]") || echo "selftests: run_afpackettests [FAIL]"
(./test_bpf.sh && echo "selftests: test_bpf.sh [PASS]") || echo "selftests: test_bpf.sh [FAIL]"
cd $ROOT
echo ; echo Running tests in nsfs
echo ========================================
cd nsfs
(./owner && echo "selftests: owner [PASS]") || echo "selftests: owner [FAIL]"
(./pidns && echo "selftests: pidns [PASS]") || echo "selftests: pidns [FAIL]"
cd $ROOT
echo ; echo Running tests in pstore
echo ========================================
cd pstore
(./pstore_tests && echo "selftests: pstore_tests [PASS]") || echo "selftests: pstore_tests [FAIL]"
(./pstore_post_reboot_tests && echo "selftests: pstore_post_reboot_tests [PASS]") || echo "selftests: pstore_post_reboot_tests [FAIL]"
cd $ROOT
echo ; echo Running tests in ptrace
echo ========================================
cd ptrace
(./peeksiginfo && echo "selftests: peeksiginfo [PASS]") || echo "selftests: peeksiginfo [FAIL]"
cd $ROOT
echo ; echo Running tests in seccomp
echo ========================================
cd seccomp
(./seccomp_bpf && echo "selftests: seccomp_bpf [PASS]") || echo "selftests: seccomp_bpf [FAIL]"
cd $ROOT
echo ; echo Running tests in sigaltstack
echo ========================================
cd sigaltstack
(./sas && echo "selftests: sas [PASS]") || echo "selftests: sas [FAIL]"
cd $ROOT
echo ; echo Running tests in size
echo ========================================
cd size
(./get_size && echo "selftests: get_size [PASS]") || echo "selftests: get_size [FAIL]"
cd $ROOT
echo ; echo Running tests in static_keys
echo ========================================
cd static_keys
(./test_static_keys.sh && echo "selftests: test_static_keys.sh [PASS]") || echo "selftests: test_static_keys.sh [FAIL]"
cd $ROOT
echo ; echo Running tests in sysctl
echo ========================================
cd sysctl
(./run_numerictests && echo "selftests: run_numerictests [PASS]") || echo "selftests: run_numerictests [FAIL]"
(./run_stringtests && echo "selftests: run_stringtests [PASS]") || echo "selftests: run_stringtests [FAIL]"
cd $ROOT
echo ; echo Running tests in timers
echo ========================================
cd timers
(./posix_timers && echo "selftests: posix_timers [PASS]") || echo "selftests: posix_timers [FAIL]"
(./nanosleep && echo "selftests: nanosleep [PASS]") || echo "selftests: nanosleep [FAIL]"
(./nsleep-lat && echo "selftests: nsleep-lat [PASS]") || echo "selftests: nsleep-lat [FAIL]"
(./set-timer-lat && echo "selftests: set-timer-lat [PASS]") || echo "selftests: set-timer-lat [FAIL]"
(./mqueue-lat && echo "selftests: mqueue-lat [PASS]") || echo "selftests: mqueue-lat [FAIL]"
(./inconsistency-check && echo "selftests: inconsistency-check [PASS]") || echo "selftests: inconsistency-check [FAIL]"
(./raw_skew && echo "selftests: raw_skew [PASS]") || echo "selftests: raw_skew [FAIL]"
(./threadtest && echo "selftests: threadtest [PASS]") || echo "selftests: threadtest [FAIL]"
(./rtctest && echo "selftests: rtctest [PASS]") || echo "selftests: rtctest [FAIL]"
cd $ROOT
echo ; echo Running tests in user
echo ========================================
cd user
(./test_user_copy.sh && echo "selftests: test_user_copy.sh [PASS]") || echo "selftests: test_user_copy.sh [FAIL]"
cd $ROOT
echo ; echo Running tests in vm
echo ========================================
cd vm
(./run_vmtests && echo "selftests: run_vmtests [PASS]") || echo "selftests: run_vmtests [FAIL]"
cd $ROOT
echo ; echo Running tests in zram
echo ========================================
cd zram
(./zram.sh && echo "selftests: zram.sh [PASS]") || echo "selftests: zram.sh [FAIL]"
cd $ROOT
