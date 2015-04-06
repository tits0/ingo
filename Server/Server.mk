##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Server
ConfigurationName      :=Debug
WorkspacePath          := "/home/anandrathi/sre/Tambola/TambolaS"
ProjectPath            := "/home/anandrathi/sre/Tambola/TambolaS/Server"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=anandrathi
Date                   :=04/06/15
CodeLitePath           :="/home/anandrathi/.codelite"
LinkerName             :=/usr/bin/g++ 
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Server.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++ 
CC       := /usr/bin/gcc 
CXXFLAGS :=  -g -O0 -std=c++11 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as 


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Ticket.cpp$(ObjectSuffix) $(IntermediateDirectory)/Suffule.cpp$(ObjectSuffix) $(IntermediateDirectory)/RowPositions.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/anandrathi/sre/Tambola/TambolaS/Server/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/Ticket.cpp$(ObjectSuffix): Ticket.cpp $(IntermediateDirectory)/Ticket.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/anandrathi/sre/Tambola/TambolaS/Server/Ticket.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Ticket.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Ticket.cpp$(DependSuffix): Ticket.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Ticket.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Ticket.cpp$(DependSuffix) -MM "Ticket.cpp"

$(IntermediateDirectory)/Ticket.cpp$(PreprocessSuffix): Ticket.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Ticket.cpp$(PreprocessSuffix) "Ticket.cpp"

$(IntermediateDirectory)/Suffule.cpp$(ObjectSuffix): Suffule.cpp $(IntermediateDirectory)/Suffule.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/anandrathi/sre/Tambola/TambolaS/Server/Suffule.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Suffule.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Suffule.cpp$(DependSuffix): Suffule.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Suffule.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Suffule.cpp$(DependSuffix) -MM "Suffule.cpp"

$(IntermediateDirectory)/Suffule.cpp$(PreprocessSuffix): Suffule.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Suffule.cpp$(PreprocessSuffix) "Suffule.cpp"

$(IntermediateDirectory)/RowPositions.cpp$(ObjectSuffix): RowPositions.cpp $(IntermediateDirectory)/RowPositions.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/anandrathi/sre/Tambola/TambolaS/Server/RowPositions.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/RowPositions.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/RowPositions.cpp$(DependSuffix): RowPositions.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/RowPositions.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/RowPositions.cpp$(DependSuffix) -MM "RowPositions.cpp"

$(IntermediateDirectory)/RowPositions.cpp$(PreprocessSuffix): RowPositions.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/RowPositions.cpp$(PreprocessSuffix) "RowPositions.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


