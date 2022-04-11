#include "Joueur.h"

Joueur::Joueur() {
	;
}

Joueur::Joueur(const Piece& premiere, const Piece& deuxieme, const Piece& troisieme) {
	pieces[0] = premiere;
	pieces[1] = premiere;
	pieces[2] = premiere;
}