#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include <QStyle>
#include <QFile>
#include <QFileDialog>
#include <QFileInfo>
#include <QTextStream>
#include <QStatusBar>
#include <QLabel>
#include <QLCDNumber>
#include <QComboBox>
#include <QStatusTipEvent>
#include <QCloseEvent>
#include <QMouseEvent>
#include <QAction>
#include <QActionGroup>
#include <QActionEvent>
#include <QPoint>
#include <QProcess>

#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QProcess *cmd;
    QString p_VCexe;
    QString p_GCCexe;
    QString p_FILEexe;
    QStringList myPrefs;

signals:
    void proccessFinished(int exitCode, QProcess::ExitStatus status);

public slots:
    void runCommand();
    void readCommand();
    void stopCommand(int exitCode, QProcess::ExitStatus exitStatus);

//private or public?
private slots:
    void error(QProcess::ProcessError error);
    void stateChanged(QProcess::ProcessState state);

    void on_btnGetVC_clicked();
    void on_btnGetGCC_clicked();
    void on_btnGetFile_clicked();
    void savePrefs();
    void getPrefs();
    void showFile();
};

#endif // MAINWINDOW_H
