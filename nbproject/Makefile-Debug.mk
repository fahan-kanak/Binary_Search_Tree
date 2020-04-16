#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/src/delete_functions.o \
	${OBJECTDIR}/src/functions.o \
	${OBJECTDIR}/src/insert_functions.o \
	${OBJECTDIR}/src/traversals.o \
	${OBJECTDIR}/src/tree.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/binary_search_tree

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/binary_search_tree: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/binary_search_tree ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/src/delete_functions.o: src/delete_functions.c
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.c) -g -std=c11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/delete_functions.o src/delete_functions.c

${OBJECTDIR}/src/functions.o: src/functions.c
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.c) -g -std=c11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/functions.o src/functions.c

${OBJECTDIR}/src/insert_functions.o: src/insert_functions.c
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.c) -g -std=c11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/insert_functions.o src/insert_functions.c

${OBJECTDIR}/src/traversals.o: src/traversals.c
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.c) -g -std=c11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/traversals.o src/traversals.c

${OBJECTDIR}/src/tree.o: src/tree.c
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.c) -g -std=c11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tree.o src/tree.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
