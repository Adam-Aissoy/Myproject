# Cahier des Charges - Projet de Gestion Intelligente de Parkings

## 1. Introduction
Ce document décrit les exigences et les spécifications pour le projet de gestion intelligente de parkings dans un centre urbain. Le but de ce projet est de proposer une méthode distribuée pour l'affectation des places de stationnement à des véhicules intelligents.

## 2. Objectifs
- Développer une application en C++ utilisant Qt pour l'interface graphique.
- Implémenter des classes pour représenter des véhicules, des parkings, et un gestionnaire de parkings.
- Permettre aux véhicules de négocier les tarifs de stationnement en fonction de différents critères.

## 3. Fonctionnalités
### 3.1. Classes Principales
- **Véhicule**
    - Attributs : ID, type, durée de stationnement, profil de l'usager.
    - Méthodes : obtenir les informations du véhicule, négocier le tarif.

- **Parking**
    - Attributs : ID, capacité, taux d'occupation, emplacement.
    - Méthodes : ajouter/enlever un véhicule, vérifier la disponibilité.

- **Gestionnaire de Parking**
    - Attributs : liste de parkings, liste de véhicules.
    - Méthodes : affecter un parking à un véhicule, ajuster les tarifs.

### 3.2. Interface Utilisateur
- Affichage de la liste des parkings disponibles.
- Interface de réservation pour les utilisateurs.
- Visualisation des tarifs en temps réel.

## 4. Technologies
- Langage de programmation : C++
- Bibliothèque : Qt5 pour l'interface graphique.
- Outils de développement : CMake pour la gestion des dépendances.

## 5. Plan de Développement
- Phase 1 : Conception des classes et de l'architecture.
- Phase 2 : Développement de l'interface graphique.
- Phase 3 : Implémentation des fonctionnalités de gestion des parkings.
- Phase 4 : Tests et validation.

## 6. Conclusion
Ce projet vise à améliorer l'expérience de stationnement en utilisant des véhicules intelligents et un système de gestion optimisé.
S