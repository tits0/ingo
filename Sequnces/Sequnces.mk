##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Sequnces
ConfigurationName      :=Debug
WorkspacePath          := "/home/anandrathi/sre/Tambola/TambolaS"
ProjectPath            := "/home/anandrathi/sre/Tambola/TambolaS/Sequnces"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=anandrathi
Date                   :=04/12/15
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
ObjectsFileList        :="Sequnces.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)pthread $(LibrarySwitch)dl 
ArLibs                 :=  "pthread" "dl" 
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
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/ColSeries.cpp$(ObjectSuffix) $(IntermediateDirectory)/hashtest.cpp$(ObjectSuffix) $(IntermediateDirectory)/Ticket.cpp$(ObjectSuffix) $(IntermediateDirectory)/RowPositions.cpp$(ObjectSuffix) $(IntermediateDirectory)/Helper.cpp$(ObjectSuffix) $(IntermediateDirectory)/sqlite3.c$(ObjectSuffix) $(IntermediateDirectory)/SqlLiteTicket.cpp$(ObjectSuffix) 



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
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/anandrathi/sre/Tambola/TambolaS/Sequnces/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/ColSeries.cpp$(ObjectSuffix): ColSeries.cpp $(IntermediateDirectory)/ColSeries.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/anandrathi/sre/Tambola/TambolaS/Sequnces/ColSeries.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ColSeries.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ColSeries.cpp$(DependSuffix): ColSeries.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ColSeries.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ColSeries.cpp$(DependSuffix) -MM "ColSeries.cpp"

$(IntermediateDirectory)/ColSeries.cpp$(PreprocessSuffix): ColSeries.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ColSeries.cpp$(PreprocessSuffix) "ColSeries.cpp"

$(IntermediateDirectory)/hashtest.cpp$(ObjectSuffix): hashtest.cpp $(IntermediateDirectory)/hashtest.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/anandrathi/sre/Tambola/TambolaS/Sequnces/hashtest.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/hashtest.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/hashtest.cpp$(DependSuffix): hashtest.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/hashtest.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/hashtest.cpp$(DependSuffix) -MM "hashtest.cpp"

$(IntermediateDirectory)/hashtest.cpp$(PreprocessSuffix): hashtest.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/hashtest.cpp$(PreprocessSuffix) "hashtest.cpp"

$(IntermediateDirectory)/Ticket.cpp$(ObjectSuffix): Ticket.cpp $(IntermediateDirectory)/Ticket.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/anandrathi/sre/Tambola/TambolaS/Sequnces/Ticket.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Ticket.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Ticket.cpp$(DependSuffix): Ticket.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Ticket.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Ticket.cpp$(DependSuffix) -MM "Ticket.cpp"

$(IntermediateDirectory)/Ticket.cpp$(PreprocessSuffix): Ticket.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Ticket.cpp$(PreprocessSuffix) "Ticket.cpp"

$(IntermediateDirectory)/RowPositions.cpp$(ObjectSuffix): RowPositions.cpp $(IntermediateDirectory)/RowPositions.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/anandrathi/sre/Tambola/TambolaS/Sequnces/RowPositions.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/RowPositions.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/RowPositions.cpp$(DependSuffix): RowPositions.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/RowPositions.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/RowPositions.cpp$(DependSuffix) -MM "RowPositions.cpp"

$(IntermediateDirectory)/RowPositions.cpp$(PreprocessSuffix): RowPositions.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/RowPositions.cpp$(PreprocessSuffix) "RowPositions.cpp"

$(IntermediateDirectory)/Helper.cpp$(ObjectSuffix): Helper.cpp $(IntermediateDirectory)/Helper.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/anandrathi/sre/Tambola/TambolaS/Sequnces/Helper.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Helper.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Helper.cpp$(DependSuffix): Helper.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Helper.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Helper.cpp$(DependSuffix) -MM "Helper.cpp"

$(IntermediateDirectory)/Helper.cpp$(PreprocessSuffix): Helper.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Helper.cpp$(PreprocessSuffix) "Helper.cpp"

$(IntermediateDirectory)/sqlite3.c$(ObjectSuffix): sqlite3.c $(IntermediateDirectory)/sqlite3.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/anandrathi/sre/Tambola/TambolaS/Sequnces/sqlite3.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sqlite3.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/sqlite3.c$(DependSuffix): sqlite3.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/sqlite3.c$(ObjectSuffix) -MF$(IntermediateDirectory)/sqlite3.c$(DependSuffix) -MM "sqlite3.c"

$(IntermediateDirectory)/sqlite3.c$(PreprocessSuffix): sqlite3.c
	@$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/sqlite3.c$(PreprocessSuffix) "sqlite3.c"

$(IntermediateDirectory)/SqlLiteTicket.cpp$(ObjectSuffix): SqlLiteTicket.cpp $(IntermediateDirectory)/SqlLiteTicket.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/anandrathi/sre/Tambola/TambolaS/Sequnces/SqlLiteTicket.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SqlLiteTicket.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SqlLiteTicket.cpp$(DependSuffix): SqlLiteTicket.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SqlLiteTicket.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SqlLiteTicket.cpp$(DependSuffix) -MM "SqlLiteTicket.cpp"

$(IntermediateDirectory)/SqlLiteTicket.cpp$(PreprocessSuffix): SqlLiteTicket.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SqlLiteTicket.cpp$(PreprocessSuffix) "SqlLiteTicket.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


