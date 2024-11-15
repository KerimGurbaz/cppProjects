#include <iostream>
using namespace std;

/**
 * void afficher(const int t[],  unsigned taille) {
    cout<<"[";
    for(unsigned i = 0; i<taille ; i++) {
        cout<<t[i];
        if(i < taille -1) {
            cout<<", ";
        }
    }
    cout<<" ]"<<endl;
}

void supprimer_valeur(int t1[], unsigned &s1, const int t2[], unsigned s2) {
    unsigned k = 0; // k suivra la nouvelle taille du tableau
    for(unsigned i =0; i< s1; i++) {
        bool found = false;
        for(unsigned j = 0; j<s2; j++) {
            if(t1[i] == t2[j]) {
                found =true;
                break;
            }
        }
        if(!found) {// si faound reste faux , le bloc if est entré
            t1[k++] = t1[i]; // l'élément t1[i] est stocké dans le nouveau tableau
        }
    }
}


int main() {
    int t1[] = {1, 3, 2, 3, 5, 4, 6, 2, 0, 6};
    unsigned s1 = sizeof(t1) / sizeof(t1[0]);
    afficher(t1, s1);

    const int t2[] = {3, 6};
    const unsigned s2 = sizeof(t2) / sizeof(t2[0]);
    afficher(t2, s2);

    supprimer_valeur(t1, s1, t2, s2);
    afficher(t1, s1);

    return 0 ;
}
 */

/**
 * void afficher(const int t1[], unsigned taille)
{
    cout << "[";
    for (int i = 0; i < taille; i++)
    {
        cout << t1[i];
        if (i < taille - 1)
        {
            cout << ", ";
        }
    }
    cout << "]"<<endl;
}

void supprimer_valeur( int t1[], unsigned &s1, const int t2[], int s2)
{
    unsigned k = 0;
    for (unsigned i = 0; i < s1; i++)
    {
        bool found = false;
        for (unsigned j = 0; j < s2; j++)
        {

            if (t1[i] == t2[j])
            {
                found = true;
                break;
            }

        }
        if (!found)
        {
            t1[k++] = t1[i];
        }
    }

    s1 = k;
}


int main() {
    int t1[] = {1, 3, 2, 3, 5, 4, 6, 2, 0, 6};
    unsigned s1 = sizeof(t1) / sizeof(t1[0]);
    afficher(t1, s1);

    const int t2[] = {3, 6};
    const unsigned s2 = sizeof(t2) / sizeof(t2[0]);
    afficher(t2, s2);

    supprimer_valeur(t1, s1, t2, s2);
    afficher(t1, s1);

    return 0 ;
}
 */

#include <iostream>
using namespace std;

void afficher(const int t[],  unsigned taille) {
    cout<<"[";
    for(unsigned i = 0; i<taille ; i++) {
        cout<<t[i];
        if(i<taille -1) {
            cout<<", ";
        }
    }
    cout<<" ]"<<endl;
}

void supprimer_valeur(int t1[], unsigned &s1, const int t2[], unsigned s2) {
    unsigned k = 0; // k suivra la nouvelle taille du tableau
    for(unsigned i =0; i< s1; i++) {
        bool found = false;
        for(unsigned j = 0; j<s2; j++) {
            if(t1[i] == t2[j]) {
                found =true;
                break;
            }
        }
        if(!found) {// si faound reste faux , le bloc if est entré
            t1[k++] = t1[i]; // l'élément t1[i] est stocké dans le nouveau tableau
        }
    }

    s1 = k;
}


int main() {
    int t1[] = {1, 3, 2, 3, 5, 4, 6, 2, 0, 6};
    unsigned s1 = sizeof(t1) / sizeof(t1[0]);
    afficher(t1, s1);

    const int t2[] = {3, 6};
    const unsigned s2 = sizeof(t2) / sizeof(t2[0]);
    afficher(t2, s2);

    supprimer_valeur(t1, s1, t2, s2);
    afficher(t1, s1);

    return 0 ;
}
