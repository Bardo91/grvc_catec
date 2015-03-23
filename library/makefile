################################################################################
#
#	GRVC_CATEC: Tool library
#		Author: Pablo Ramón Soria
#		Date: 2015-MAR-23
#
################################################################################

########## Variables ##########
PRJ_NAME = libgrvc

AR = ar
CXX = g++
CPP_FILES := $(shell find ./src -name '*.cpp')
OBJ_FILES = $(patsubst %.cpp, %.o, $(CPP_FILES))

CXX_FLAGS = -fPIC -std=c++11 -O3 -Wall -Werror

DEFINITIONS = -DINCLUDE_ROS_LIBRARY

OUTPUT_DIR := bin
########## EXTERNAL INCLUDES ##########
INCLUDES :=
LIBRARIES := 
DEPENDENCIES :=

########## RULES ##########

all: rebuild

rebuild: clean shared_lib
	
# Remove preious files
clean:
	@echo "--------------------------------------"
	@echo "Cleaning project----------------------"
	rm -f $(OBJ_FILES)
	@echo "Project Cleaned-----------------------"

$(OUTPUT_DIR):
	mkdir -p $(OUTPUT_DIR)
	
# Compile static library
static_lib: $(OBJ_FILES)
	@echo "--------------------------------------"
	@echo "Current cpps--------------------------"
	@echo $(CPP_FILES)
	@echo "Searching for objects-----------------"
	@echo $(OBJ_FILES)
	@echo "Prepare compilation-------------------"
	$(AR) rcs $(PRJ_NAME).a $^
	@echo "Generated static library -------------"

# Compile shared library
shared_lib: $(OBJ_FILES) $(OUTPUT_DIR)
	@echo "--------------------------------------"
	@echo "Current cpps--------------------------"
	@echo $(CPP_FILES)
	@echo "Searching for objects-----------------"
	@echo $(OBJ_FILES)
	@echo "Prepare compilation-------------------"
	$(CXX) -shared -o $(OUTPUT_DIR)/$(PRJ_NAME).so $(OBJ_FILES) $(CXX_FLAGS)
	@echo "Generated shared library -------------"



# Compile to .o
%.o: %.cpp
	@echo "--------------------------------------"
	@echo "Linking " $^ " to " $@
	$(CXX) -c $^ -o $@ $(INCLUDES) $(LIBRARIES) $(DEPENDENCIES) $(CXX_FLAGS) $(DEFINITIONS)


########## PHONY ##########
.PHONY: all clean run $(OUTPUT_DIR)




