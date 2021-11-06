# Installation ROS noetic

## Ubuntu 20.04

Ajouter les sources de package ros
```bash
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
```

Ajouter les clés GPG ros

```bash
curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -
```

Mettre à jour les repo apt

```bash
sudo apt update
```

Installer le package ROS

```bash
sudo apt install ros-noetic-<package>
```

Avec `package` au choix :
- `desktop-full` : distribution complète, y compris les simulateurs 2D/3D
- `desktop` : Packages de base + outils de visualisation rqt et rviz
- `ros-base` : strict minimum pour lancer des noeuds en headless

Pour avoir accès aux commande ros, il faut sourcer l'environnement (on peut le rajouter au `.bashrc` pour se simplifier la vie) : 

```bash
source /opt/ros/noetic/setup.bash
```

## Autre

Voir la [référence ROS](http://wiki.ros.org/noetic/Installation) pour l'installation sur d'autres plateformes (Debian Buster, Arch, Windows 10)

