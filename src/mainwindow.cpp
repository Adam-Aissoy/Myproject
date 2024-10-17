#include "mainwindow.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QPainter>

// Widget personnalisé pour dessiner les parkings et véhicules
class ParkingWidget : public QWidget {
    Q_OBJECT

public:
    ParkingWidget(ParkingManager* manager, QWidget *parent = nullptr)
        : QWidget(parent), parkingManager(manager) {}

protected:
    void paintEvent(QPaintEvent *event) override {
        QPainter painter(this);

        // Dessiner les véhicules
        painter.setBrush(Qt::blue);
        for (const auto& vehicle : parkingManager->getVehicles()) {
            painter.drawRect(vehicle.getX(), vehicle.getY(), 20, 10);
        }

        // Dessiner les parkings
        painter.setBrush(Qt::green);
        for (const auto& parking : parkingManager->getParkings()) {
            painter.drawRect(parking.getX(), parking.getY(), 40, 40);
        }
    }

private:
    ParkingManager* parkingManager;
};

// Constructeur de MainWindow
MainWindow::MainWindow(ParkingManager* manager, QWidget *parent)
    : QMainWindow(parent), parkingManager(manager) {
    setupUI();
}

// Configuration de l'interface utilisateur
void MainWindow::setupUI() {
    // Créer un widget central
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    // Créer une disposition verticale
    QVBoxLayout *layout = new QVBoxLayout;

    // Créer et ajouter le widget de visualisation du parking
    parkingWidget = new ParkingWidget(parkingManager);
    layout->addWidget(parkingWidget);

    // Ajouter un bouton pour tester
    QPushButton *button = new QPushButton("Ajouter un véhicule", this);
    layout->addWidget(button);

    // Configurer le widget central
    centralWidget->setLayout(layout);
}
