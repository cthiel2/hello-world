class person
   {
private:

public:
    char vorname[100];
    char nachname[100];
    char patronym[100];
    char middlename[100];
    char titel[100];
    char herkunft;
    void askEnglish(class person *partner);
    void frageDeutsch(class person *partner);
    void greetEnglish(class person *partner);
    void gruesseDeutsch(class person *partner);
};
