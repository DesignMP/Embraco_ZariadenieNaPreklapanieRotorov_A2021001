SHELL := cmd.exe
CYGWIN=nontsec
export PATH := C:\Program Files (x86)\NVIDIA Corporation\PhysX\Common;C:\Program Files (x86)\Common Files\Oracle\Java\javapath;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\Program Files\Intel\WiFi\bin\;C:\Program Files\Common Files\Intel\WirelessCommon\;C:\Program Files (x86)\Common Files\Acronis\VirtualFile\;C:\Program Files (x86)\Common Files\Acronis\VirtualFile64\;C:\Program Files (x86)\Common Files\Acronis\FileProtector\;C:\Program Files (x86)\Common Files\Acronis\FileProtector64\;C:\Program Files (x86)\Common Files\Acronis\SnapAPI\;C:\Program Files (x86)\EAC MW klient\;C:\Program Files (x86)\Intel\Intel(R) Management Engine Components\DAL;C:\Program Files\Intel\Intel(R) Management Engine Components\DAL;C:\Program Files\Microsoft SQL Server\120\Tools\Binn\;C:\Users\marti\AppData\Local\Microsoft\WindowsApps;C:\Program Files (x86)\Common Files\Hilscher GmbH\TLRDecode;C:\Users\marti\AppData\Local\Microsoft\WindowsApps;C:\Program Files (x86)\Common Files\Hilscher GmbH\TLRDecode
export AS_BUILD_MODE := Rebuild
export AS_VERSION := 4.7.6.114 SP
export AS_COMPANY_NAME :=  
export AS_USER_NAME := Martin Dvorscak
export AS_PATH := C:/BrAutomation/AS47
export AS_BIN_PATH := C:/BrAutomation/AS47/Bin-en
export AS_PROJECT_PATH := D:/Projekty\ BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001
export AS_PROJECT_NAME := ZariadenieNaPreklapanieRotorov
export AS_SYSTEM_PATH := C:/BrAutomation/AS/System
export AS_VC_PATH := C:/BrAutomation/AS47/AS/VC
export AS_TEMP_PATH := D:/Projekty\ BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Temp
export AS_CONFIGURATION := Config2
export AS_BINARIES_PATH := D:/Projekty\ BER/Embraco_ZariadenieNaPreklapanieRotorov_A2021001/Binaries
export AS_GNU_INST_PATH := C:/BrAutomation/AS47/AS/GnuInst/V6.3.0
export AS_GNU_BIN_PATH := $(AS_GNU_INST_PATH)/bin
export AS_GNU_INST_PATH_SUB_MAKE := C:/BrAutomation/AS47/AS/GnuInst/V6.3.0
export AS_GNU_BIN_PATH_SUB_MAKE := $(AS_GNU_INST_PATH_SUB_MAKE)/bin
export AS_INSTALL_PATH := C:/BrAutomation/AS47
export WIN32_AS_PATH := "C:\BrAutomation\AS47"
export WIN32_AS_BIN_PATH := "C:\BrAutomation\AS47\Bin-en"
export WIN32_AS_PROJECT_PATH := "D:\Projekty BER\Embraco_ZariadenieNaPreklapanieRotorov_A2021001"
export WIN32_AS_SYSTEM_PATH := "C:\BrAutomation\AS\System"
export WIN32_AS_VC_PATH := "C:\BrAutomation\AS47\AS\VC"
export WIN32_AS_TEMP_PATH := "D:\Projekty BER\Embraco_ZariadenieNaPreklapanieRotorov_A2021001\Temp"
export WIN32_AS_BINARIES_PATH := "D:\Projekty BER\Embraco_ZariadenieNaPreklapanieRotorov_A2021001\Binaries"
export WIN32_AS_GNU_INST_PATH := "C:\BrAutomation\AS47\AS\GnuInst\V6.3.0"
export WIN32_AS_GNU_BIN_PATH := "$(WIN32_AS_GNU_INST_PATH)\\bin" 
export WIN32_AS_INSTALL_PATH := "C:\BrAutomation\AS47"

.suffixes:

ProjectMakeFile:

	@'$(AS_BIN_PATH)/BR.AS.AnalyseProject.exe' '$(AS_PROJECT_PATH)/ZariadenieNaPreklapanieRotorov.apj' -t '$(AS_TEMP_PATH)' -c '$(AS_CONFIGURATION)' -o '$(AS_BINARIES_PATH)'   -sfas -buildMode 'Rebuild'   

