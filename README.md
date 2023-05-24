# get_next_line

<a href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/cl9fdq1tx00060hjo3yzhdvyv/stats?cursusId=21&coalitionId=12" alt="mqueguin's 42 stats" /></a>

# Grade
<a href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/cl9fdq1tx00060hjo3yzhdvyv/project/2068364" alt="mqueguin's 42 get_next_line Score" /></a>

# Subject
Ce projet demande de développer une fonction get_next_line en C qui renvoie une ligne lue depuis un descripteur de fichier. Cette fonction sera utile pour lire un fichier texte ligne par ligne.

Règles principales :

    Le code doit être écrit en C et respecter une norme donnée. Aucun crash (ex: segmentation fault) ou fuite mémoire ne sera toléré.
    Un Makefile est requis pour compiler les sources, avec des règles spécifiques comme $(NAME), all, clean, fclean et re.
    Pour les bonus, une règle bonus doit être ajoutée au Makefile.
    Des programmes de test sont recommandés mais non notés.
    La soumission se fait via git.

Concernant la fonction get_next_line, elle doit :

    Prendre un descripteur de fichier en entrée et renvoyer la ligne suivante du fichier ou NULL si plus rien à lire ou en cas d'erreur.
    La fonction doit gérer correctement la lecture d'un fichier ou de l'entrée standard.
    Elle doit retourner la ligne lue avec le '\n' à la fin, sauf si fin de fichier atteinte sans '\n'.
    Des fonctions supplémentaires peuvent être ajoutées dans get_next_line_utils.c si nécessaire.
    La fonction doit compiler avec l'option -D BUFFER_SIZE=n où n est la taille du buffer lors de l'appel à read().
    La fonction ne doit pas lire l'intégralité du fichier en une seule fois, mais plutôt lire le moins possible à chaque appel.

Pour les bonus, il est suggéré de gérer plusieurs descripteurs de fichiers en lecture simultanée sans perdre le contenu lu sur chacun, avec une seule variable statique.
