/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file Copyright.txt or https://cmake.org/licensing#kwsys for details.  */
#ifndef cmsys_SystemInformation_h
#define cmsys_SystemInformation_h

#include <cmsys/Configure.hxx>

#include <stddef.h> /* size_t */
#include <string>

namespace cmsys {

// forward declare the implementation class
class SystemInformationImplementation;

class cmsys_EXPORT SystemInformation
{
#if 1
  typedef long long LongLong;
#elif 0
  typedef __int64 LongLong;
#else
#  error "No Long Long"
#endif
  friend class SystemInformationImplementation;
  SystemInformationImplementation* Implementation;

public:
  // possible parameter values for DoesCPUSupportFeature()
  static const long int CPU_FEATURE_MMX = 1 << 0;
  static const long int CPU_FEATURE_MMX_PLUS = 1 << 1;
  static const long int CPU_FEATURE_SSE = 1 << 2;
  static const long int CPU_FEATURE_SSE2 = 1 << 3;
  static const long int CPU_FEATURE_AMD_3DNOW = 1 << 4;
  static const long int CPU_FEATURE_AMD_3DNOW_PLUS = 1 << 5;
  static const long int CPU_FEATURE_IA64 = 1 << 6;
  static const long int CPU_FEATURE_MP_CAPABLE = 1 << 7;
  static const long int CPU_FEATURE_HYPERTHREAD = 1 << 8;
  static const long int CPU_FEATURE_SERIALNUMBER = 1 << 9;
  static const long int CPU_FEATURE_APIC = 1 << 10;
  static const long int CPU_FEATURE_SSE_FP = 1 << 11;
  static const long int CPU_FEATURE_SSE_MMX = 1 << 12;
  static const long int CPU_FEATURE_CMOV = 1 << 13;
  static const long int CPU_FEATURE_MTRR = 1 << 14;
  static const long int CPU_FEATURE_L1CACHE = 1 << 15;
  static const long int CPU_FEATURE_L2CACHE = 1 << 16;
  static const long int CPU_FEATURE_L3CACHE = 1 << 17;
  static const long int CPU_FEATURE_ACPI = 1 << 18;
  static const long int CPU_FEATURE_THERMALMONITOR = 1 << 19;
  static const long int CPU_FEATURE_TEMPSENSEDIODE = 1 << 20;
  static const long int CPU_FEATURE_FREQUENCYID = 1 << 21;
  static const long int CPU_FEATURE_VOLTAGEID_FREQUENCY = 1 << 22;
  static const long int CPU_FEATURE_FPU = 1 << 23;

public:
  SystemInformation();
  ~SystemInformation();

  SystemInformation(const SystemInformation&) = delete;
  SystemInformation& operator=(const SystemInformation&) = delete;

  const char* GetVendorString();
  const char* GetVendorID();
  std::string GetTypeID();
  std::string GetFamilyID();
  std::string GetModelID();
  std::string GetModelName();
  std::string GetSteppingCode();
  const char* GetExtendedProcessorName();
  const char* GetProcessorSerialNumber();
  int GetProcessorCacheSize();
  unsigned int GetLogicalProcessorsPerPhysical();
  float GetProcessorClockFrequency();
  int GetProcessorAPICID();
  int GetProcessorCacheXSize(long int);
  bool DoesCPUSupportFeature(long int);

  // returns an informative general description of the cpu
  // on this system.
  std::string GetCPUDescription();

  const char* GetHostname();
  std::string GetFullyQualifiedDomainName();

  const char* GetOSName();
  const char* GetOSRelease();
  const char* GetOSVersion();
  const char* GetOSPlatform();

  int GetOSIsWindows();
  int GetOSIsLinux();
  int GetOSIsApple();

  // returns an informative general description of the os
  // on this system.
  std::string GetOSDescription();

  // returns if the operating system is 64bit or not.
  bool Is64Bits();

  unsigned int GetNumberOfLogicalCPU();
  unsigned int GetNumberOfPhysicalCPU();

  bool DoesCPUSupportCPUID();

  // Retrieve id of the current running process
  LongLong GetProcessId();

  // Retrieve memory information in MiB.
  size_t GetTotalVirtualMemory();
  size_t GetAvailableVirtualMemory();
  size_t GetTotalPhysicalMemory();
  size_t GetAvailablePhysicalMemory();

  // returns an informative general description if the installed and
  // available ram on this system. See the GetHostMemoryTotal, and
  // Get{Host,Proc}MemoryAvailable methods for more information.
  std::string GetMemoryDescription(const char* hostLimitEnvVarName = NULL,
                                   const char* procLimitEnvVarName = NULL);

  // Retrieve amount of physical memory installed on the system in KiB
  // units.
  LongLong GetHostMemoryTotal();

  // Get total system RAM in units of KiB available colectivley to all
  // processes in a process group. An example of a process group
  // are the processes comprising an mpi program which is running in
  // parallel. The amount of memory reported may differ from the host
  // total if a host wide resource limit is applied. Such reource limits
  // are reported to us via an application specified environment variable.
  LongLong GetHostMemoryAvailable(const char* hostLimitEnvVarName = NULL);

  // Get total system RAM in units of KiB available to this process.
  // This may differ from the host available if a per-process resource
  // limit is applied. per-process memory limits are applied on unix
  // system via rlimit API. Resource limits that are not imposed via
  // rlimit API may be reported to us via an application specified
  // environment variable.
  LongLong GetProcMemoryAvailable(const char* hostLimitEnvVarName = NULL,
                                  const char* procLimitEnvVarName = NULL);

  // Get the system RAM used by all processes on the host, in units of KiB.
  LongLong GetHostMemoryUsed();

  // Get system RAM used by this process id in units of KiB.
  LongLong GetProcMemoryUsed();

  // Return the load average of the machine or -0.0 if it cannot
  // be determined.
  double GetLoadAverage();

  // enable/disable stack trace signal handler. In order to
  // produce an informative stack trace the application should
  // be dynamically linked and compiled with debug symbols.
  static void SetStackTraceOnError(int enable);

  // format and return the current program stack in a string. In
  // order to produce an informative stack trace the application
  // should be dynamically linked and compiled with debug symbols.
  static std::string GetProgramStack(int firstFrame, int wholePath);

  /** Run the different checks */
  void RunCPUCheck();
  void RunOSCheck();
  void RunMemoryCheck();
};

} // namespace cmsys

#endif
