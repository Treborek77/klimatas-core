// Copyright (c) 2019 The KTSX developers
// Copyright (c) 2019-2020 The Klimatas developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef DENOMGENERATIONDIALOG_H
#define DENOMGENERATIONDIALOG_H

#include <QDialog>

namespace Ui {
class DenomGenerationDialog;
}

class DenomGenerationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DenomGenerationDialog(QWidget *parent = nullptr);
    ~DenomGenerationDialog();

private:
    Ui::DenomGenerationDialog *ui;
};

#endif // DENOMGENERATIONDIALOG_H
