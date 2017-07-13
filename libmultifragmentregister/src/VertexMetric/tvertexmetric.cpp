/**
 * @file        tvertexmetric.cpp
 * @author      Ondrej Klima, BUT FIT Brno, iklima@fit.vutbr.cz
 * @version     1.0
 * @date        15 December 2016
 *
 * @brief       The implementation file containing the TVertexMetric class.
 *
 * @copyright   Copyright (C) 2016 Ondrej Klima, Petr Kleparnik. All Rights Reserved.
 *
 * @license     This file may be used, distributed and modified under the terms of the LGPL version 3
 *              open source license. A copy of the LGPL license should have
 *              been recieved with this file. Otherwise, it can be found at:
 *              http://www.gnu.org/copyleft/lesser.html
 *              This file has been created as a part of the Traumatech project:
 *              http://www.fit.vutbr.cz/research/grants/index.php.en?id=733.
 *
 */

#include "VertexMetric/tvertexmetric.h"

/**
 * @brief Sets the shape model mesh
 * @param mesh Shape model mesh
 */
void TVertexMetric::setMesh(SSIMRenderer::Mesh * mesh)
{
    myMesh = mesh;
}

/**
 * @brief Sets the number of radiographs per one bone fragment
 * @param views Number of views
 */
void TVertexMetric::setViewsNumber(int views)
{
    myViewsNumber = views;
}

/**
 * @brief Constructor of the vertex metric class
 */
TVertexMetric::TVertexMetric():
    myMesh(NULL),
    myData(NULL),
    myRefData(NULL)
{

}

/**
 * @brief Destructor of the vertex metric class
 */
TVertexMetric::~TVertexMetric()
{

}