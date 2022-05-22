int y_e{6};

extern const int nuevo{13};
extern constexpr int newe{45}; // ! Este nunca podra tner un vinculacion externa


// < Defincion de vriables gloobales externas
int japon{34};
extern const int mexico{23};
extern constexpr usa{98};

// * Definicion de variables anticipadas

extern int japon;
extern const int mexico;
extern constexpr usa; // ! this cannot be an extern variable 


