#define MISSION_PREFIX seed
#define PREFIX bw

// Basic
#define GLUE(var1,var2)         var1##var2
#define DOUBLES(var1,var2)      var1##_##var2
#define TRIPLES(var1,var2,var3) var1##_##var2##_##var3
#define QUOTE(var1)             #var1
#define QQUOTE(var1)            QUOTE(QUOTE(var1))
#define ARR_2(var1,var2)        var1,var2

// Redefine mission prefix
#define MISSION_GVAR_PREFIX DOUBLES(PREFIX,MISSION_PREFIX)

// Variable functions
#define GVAR(var1)   DOUBLES(MISSION_GVAR_PREFIX,var1)
#define QGVAR(var1)  QUOTE(DOUBLES(MISSION_GVAR_PREFIX,var1))
#define DGVAR(var1)  DOUBLES(MISSION_PREFIX,var1)
#define QDGVAR(var1) QUOTE(DOUBLES(MISSION_PREFIX,var1))
#define FUNC(var1)   TRIPLES(PREFIX,fnc,var1)
#define QFUNC(var1)  QUOTE(FUNC(var1))
