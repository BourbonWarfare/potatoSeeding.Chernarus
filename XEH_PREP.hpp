#define UI(var1) DOUBLES(functions\ui\fn,var1)
#define HELPER(var1) DOUBLES(functions\helper\fn,var1)
#define FILLZONE(var1) DOUBLES(functions\fillZone\fn,var1)
#define SERVER(var1) DOUBLES(functions\serverSystems\fn,var1)
#define MFLOW(var1) DOUBLES(functions\missionFlow\fn,var1)


#define PREP_COMPLEX(var1,var2) TRIPLES(PREFIX,fnc,var1) = compileScript [QUOTE(GLUE(var2,.sqf))]
#define PREP(var1) TRIPLES(PREFIX,fnc,var1) = compileScript [QUOTE(functions\DOUBLES(fn,var1).sqf))]

