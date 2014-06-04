class Profesor::Empleado {
    protected:
        int numGrupos;
        float horas;
        string academia;
    public:
    Profesor(int=0, float=0.0,string="",
            int=0, float=0.0,string="",
            int=0, float=0.0,string="")
    ~Profesor();
    void pideleAlUsuarioTusDatos();
    void muestraTusDatos();
    int dameTuNumGrupos();
    float dameTusHoras();
    string dameTuAcademia();
    void modificaTuNumGrupos(int);
    void modificaTusHoras(float);
    void modificaTuAcademia(string);
    };

Profesor::Profesor(int ed, int es, int g,
                   int ne, float s, string p,
                   int ng, float h, string a)
        Empleado(ed,es,g,ne,s,p),numGrupos(ng),horas(h),academia(a){}

Profesor::~Profesor(){}

void Profesor::pideleAlUsuarioTusDatos(){
    Empleado::pideleAlUsuarioTusDatos();
    cout<<"Dame mi Numero de Grupos: ";
    cin>>numGrupos;
    cout<<"Dame mi numero de horas: ";
    cin>>horas;
    cout<<"Dame mi academia: "<<endl;
    cin.get();
    getline(cin, academia);
    }
Profesor::muestraTusDatos(){
    Empleado::muestraTusDatos();
    cout<<"Mi numero de Grupos es: "<<numGrupos<<endl;
    cout<<"Mi numero de horas es: "<<horas<<endl;
    cout<<"Mi academia es : "<<academia<<endl;
    }

int Profesor::dameTuNumGrupos(){
    return numGrupos;
    }
float Profesor::dameTusHoras(){
    return horas;
    }
string Profesor::dameTuAcademia(){
    return academia;
    }
void Profesor::modificaTuNumGrupos(int ng){
    numGrupos=ng;
    }
void Profesor::modificaTusHoras(float h){
    horas=h;
    }
void Profesor::modificaTuAcademia(string a){
    academia=a;
    }

