#include <unistd.h>?//ssize_t read(int fd, void *buf, size_t count);
#include <stdlib.h>//void *malloc(size_t size); && void free(void *ptr);


int strlen(const char *s)
calcule la longueur de la chaîne de caractères s, sans compter l'octet nul « \0 » final

char	*ft_strchr(const char *str, int c)
Rechercher un caractère dans une chaîne  
renvoie un pointeur sur la première occurrence du caractère c dans la chaîne s ou NULL si le caractère n'a pas été trouvé.

char *ft_substr(char const *s, unsigned int start, size_t len)
Renvoie une sous-chaîne issue de’s’commence à l’index ’start’ et a pour taille maximale ’len’
Alloue (avec malloc(3))
renvoie la nouvelle chaîne de caractères, ou NULL si l’allocation échoue.

char    *ft_strdup(char *src)
Dupliquer une chaîne  char    *ft_strdup(char *src)
renvoie un pointeur sur une nouvelle chaîne de caractères qui est dupliquée depuis s. La mémoire occupée par cette nouvelle chaîne est obtenue en appelant malloc(3), et peut (doit) donc être libérée avec free(3)., ou NULL s'il n'y avait pas assez de mémoire. 


*ft_strjoin(char const *s1, char const *s2)
strjoin -   concaténer S1 et S2 
Alloue (avec malloc(3)) et retourne une nouvelle chaîne, résultat de la concaténation de s1 et s2.
renvoie la nouvelle chaîne de caractères, ou NULL si l’allocation échoue.


//---FONCTION POUR ASSOCIER LES DIFFERENTS BUF
*ft_strjoin(char const *s1, char const *s2)

char	_fill_line_buffer ()
//C'est le porteur d'eau. Il plonge dans le puits (le fichier) avec un seau (le buffer) et remonte une quantité définie de seaux à chaque fois.
{
	s 1;
	s 1 = char *ft_substr(char const *s, unsigned int start, size_t len)
	

 	return (s1);

}
_set_line()
//C'est le préparateur. Il prend les seaux remplis par le porteur d'eau et les prépare pour la prochaine utilisation. Il retire l'eau (les caractères) dont on n'a plus besoin et prépare un nouveau seau vide.
{
	static char *new;
	char tmpnew;//
	char tmpreste
	
	char	*ft_strchr(const char *s1, int c)
	return(pointeur sur \n ou \0 ou NULL si pas trouve)
	if (pointeur sur \n ou \0 NULL)
	{
		//joint new + s1
		new = *ft_strjoin(char const *new, char const *s1)
	}
	if (pointeur sur \n ou \0 trouve)
	{
		//extrait de s1 jusqu'a \n ou \0
		tmpnew = char *ft_substr(char const *s, unsigned int start, size_t len)
	 	//                                   s1              s[0]          len      
	 	//joint new + tmpnew = s [de 0 a len=pointeur-1] 
		new = *ft_strjoin(char const *new, char const *tmpnew) 
		// renvoyer dans s1 le reste de S1[pointeur+1]=s1[pointeur+1 a len-pointeur+1]
		tmpreste = char *ft_substr(char const *s, unsigned int start, size_t len)
		//                                    s1            pointeur+1      len-pointeur+1
	}

}
//---FONCTION DE LECTURE DU FILE DESCRIPTOR
char *get_next_line(int fd)
//C'est le chef d'équipe. Il organise le travail, vérifie que tout se passe bien et appelle les autres fonctions pour faire le travail.

{
	static var1//va ajouter valeur de buffer 
	while (fd != \n)
		read nbyte de fd et pose dans buf
		envoie buf dans var1  var1 += buf
		if (echoue)
		renvoie(-1)
		if (reussi)
		if (cherche dans buffer le \n)
			char	*ft_strrchr(const char *str, int c)
			if (ne trouve pas)
				char *ft_strjoin(char const *s1, char const *s2)
			if (trouve)
				char *ft_substr(char const *s, unsigned int start, size_t len)
		
		renvoie nb octet lu et 0 en fin de fichier
		
	if (dans nbyte il y a \n)
		envoie jusqu'a \n dans buff
		
		envoie reste dans buf




}
