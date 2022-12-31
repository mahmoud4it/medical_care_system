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
CND_PLATFORM=GNU-MacOSX
CND_DLIB_EXT=dylib
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Analysis.o \
	${OBJECTDIR}/BloodBank.o \
	${OBJECTDIR}/BloodReservation.o \
	${OBJECTDIR}/BuyingMedicine.o \
	${OBJECTDIR}/Category.o \
	${OBJECTDIR}/Clinic.o \
	${OBJECTDIR}/ClinicReservation.o \
	${OBJECTDIR}/Doctor.o \
	${OBJECTDIR}/Hospital.o \
	${OBJECTDIR}/HospitalReservation.o \
	${OBJECTDIR}/Lab.o \
	${OBJECTDIR}/LabReservation.o \
	${OBJECTDIR}/Major.o \
	${OBJECTDIR}/MedLinkedList.o \
	${OBJECTDIR}/MedQueue.o \
	${OBJECTDIR}/MedStack.o \
	${OBJECTDIR}/Medication.o \
	${OBJECTDIR}/Menu.o \
	${OBJECTDIR}/Patient.o \
	${OBJECTDIR}/Pharmacy.o \
	${OBJECTDIR}/Rays.o \
	${OBJECTDIR}/RaysReservation.o \
	${OBJECTDIR}/Specialty.o \
	${OBJECTDIR}/SubCategory.o \
	${OBJECTDIR}/TypesRays.o \
	${OBJECTDIR}/filehandling.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/mainMenu.o \
	${OBJECTDIR}/node.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/medical_insurace

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/medical_insurace: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/medical_insurace ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Analysis.o: Analysis.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Analysis.o Analysis.cpp

${OBJECTDIR}/BloodBank.o: BloodBank.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/BloodBank.o BloodBank.cpp

${OBJECTDIR}/BloodReservation.o: BloodReservation.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/BloodReservation.o BloodReservation.cpp

${OBJECTDIR}/BuyingMedicine.o: BuyingMedicine.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/BuyingMedicine.o BuyingMedicine.cpp

${OBJECTDIR}/Category.o: Category.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Category.o Category.cpp

${OBJECTDIR}/Clinic.o: Clinic.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Clinic.o Clinic.cpp

${OBJECTDIR}/ClinicReservation.o: ClinicReservation.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ClinicReservation.o ClinicReservation.cpp

${OBJECTDIR}/Doctor.o: Doctor.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Doctor.o Doctor.cpp

${OBJECTDIR}/Hospital.o: Hospital.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Hospital.o Hospital.cpp

${OBJECTDIR}/HospitalReservation.o: HospitalReservation.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/HospitalReservation.o HospitalReservation.cpp

${OBJECTDIR}/Lab.o: Lab.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Lab.o Lab.cpp

${OBJECTDIR}/LabReservation.o: LabReservation.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/LabReservation.o LabReservation.cpp

${OBJECTDIR}/Major.o: Major.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Major.o Major.cpp

${OBJECTDIR}/MedLinkedList.o: MedLinkedList.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MedLinkedList.o MedLinkedList.cpp

${OBJECTDIR}/MedQueue.o: MedQueue.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MedQueue.o MedQueue.cpp

${OBJECTDIR}/MedStack.o: MedStack.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MedStack.o MedStack.cpp

${OBJECTDIR}/Medication.o: Medication.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Medication.o Medication.cpp

${OBJECTDIR}/Menu.o: Menu.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Menu.o Menu.cpp

${OBJECTDIR}/Patient.o: Patient.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Patient.o Patient.cpp

${OBJECTDIR}/Pharmacy.o: Pharmacy.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Pharmacy.o Pharmacy.cpp

${OBJECTDIR}/Rays.o: Rays.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Rays.o Rays.cpp

${OBJECTDIR}/RaysReservation.o: RaysReservation.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/RaysReservation.o RaysReservation.cpp

${OBJECTDIR}/Specialty.o: Specialty.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Specialty.o Specialty.cpp

${OBJECTDIR}/SubCategory.o: SubCategory.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/SubCategory.o SubCategory.cpp

${OBJECTDIR}/TypesRays.o: TypesRays.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TypesRays.o TypesRays.cpp

${OBJECTDIR}/filehandling.o: filehandling.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/filehandling.o filehandling.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/mainMenu.o: mainMenu.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/mainMenu.o mainMenu.cpp

${OBJECTDIR}/node.o: node.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/node.o node.cpp

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
