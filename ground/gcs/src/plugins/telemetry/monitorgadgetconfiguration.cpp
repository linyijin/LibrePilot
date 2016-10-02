/**
 ******************************************************************************
 *
 * @file       monitorgadgetconfiguration.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup TelemetryPlugin Telemetry Plugin
 * @{
 * @brief A gadget that displays a 3D representation of the UAV
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "monitorgadgetconfiguration.h"

MonitorGadgetConfiguration::MonitorGadgetConfiguration(QString classId, QSettings &settings, QObject *parent) :
    IUAVGadgetConfiguration(classId, parent)
{}

MonitorGadgetConfiguration::MonitorGadgetConfiguration(const MonitorGadgetConfiguration &obj) :
    IUAVGadgetConfiguration(obj.classId(), obj.parent())
{}

IUAVGadgetConfiguration *MonitorGadgetConfiguration::clone() const
{
    return new MonitorGadgetConfiguration(*this);
}

/**
 * Saves a configuration.
 *
 */
void MonitorGadgetConfiguration::saveConfig(QSettings &settings) const
{
    Q_UNUSED(settings);
// settings->setValue("acFilename", Utils::RemoveDataPath(m_acFilename));
// settings->setValue("bgFilename", Utils::RemoveDataPath(m_bgFilename));
// settings->setValue("enableVbo", m_enableVbo);
}
