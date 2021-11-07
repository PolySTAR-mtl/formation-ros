# Quickstart ROS

## Créer un workspace

Crée un lien symbolique vers le `CMakeLists.txt` root de catkin.
```bash
mkdir -p ros_ws/src && cd ros_ws/src
catkin_init_workspace
```

## Créer un package

Dans `ros_ws/src` :

```bash
catkin_create_pkt mon_pkg [dependances..]
```

Puis mettre à jour le `CMakeLists.txt` et `package.xml` pour les objectifs de build. Checker `catkin_create_pkg --help` pour les différentes options possibles.
