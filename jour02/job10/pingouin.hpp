#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP
#include "aquatique.hpp"
#include "terrestre.hpp"
#include <vector>
#include <memory>
#include <string>
#include <list>
#include <map>
#include <set>
#include <unordered_map>

class pingouin : public aquatique, public terrestre {
    public:
        pingouin(double vitesseDeNage, double vitesseDeMarche, double vitesseDeGlisse, std::string nom);
        pingouin(const pingouin &p);
        ~pingouin();
        void ajouterPingouin(std::shared_ptr<pingouin> p);
        void nage();
        void marche();
        void sePresenter();
        void glisse();
        void setVitesseDeGlisse(double vitesseDeGlisse);
        double chrono(double distance, std::string type);
        static void course(std::vector<std::shared_ptr<pingouin>> colonie);
        static std::vector<std::shared_ptr<pingouin>> colonie;
        double calculerVitesseParcours();
        double getVitesseParcours();
        double getVitesseDeGlisse();
        std::string getNom();

        static void ajouterLieuDeRencontre(std::string lieu);
        static void retirerLieuDeRencontre(std::string lieu);
        static void afficherLieuxDeRencontres();

        void ajouterNiveauDeCompetence(std::string competence, int niveau);
        void retirerNiveauDeCompetence(std::string competence);
        void afficherNiveauxDeCompetence();

        void ajouterAmi(std::weak_ptr<pingouin> ami);
        void retirerAmi(std::weak_ptr<pingouin> ami);
        void afficherAmis();

        void ajouterAventure(std::string date, std::string description);
        void retirerAventure(std::string date);
        void afficherAventures();


    private:
        double vitesseDeGlisse;
        std::string nom;
        double vitesseParcours;
        static std::list<std::string> lieuxDeRencontres;
        std::map<std::string, int> niveauxDeCompetence;
        std::set<std::weak_ptr<pingouin>, std::owner_less<std::weak_ptr<pingouin>>> amis;
        std::unordered_map<std::string, std::string> aventures;
};

#endif