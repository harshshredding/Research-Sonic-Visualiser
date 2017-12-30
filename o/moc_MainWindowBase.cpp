/****************************************************************************
** Meta object code from reading C++ file 'MainWindowBase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svapp/framework/MainWindowBase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindowBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindowBase_t {
    QByteArrayData data[174];
    char stringdata0[2669];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindowBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindowBase_t qt_meta_stringdata_MainWindowBase = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MainWindowBase"
QT_MOC_LITERAL(1, 15, 10), // "canAddPane"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 20), // "canDeleteCurrentPane"
QT_MOC_LITERAL(4, 48, 11), // "canAddLayer"
QT_MOC_LITERAL(5, 60, 18), // "canImportMoreAudio"
QT_MOC_LITERAL(6, 79, 19), // "canReplaceMainAudio"
QT_MOC_LITERAL(7, 99, 14), // "canImportLayer"
QT_MOC_LITERAL(8, 114, 24), // "canChangeSessionTemplate"
QT_MOC_LITERAL(9, 139, 14), // "canExportAudio"
QT_MOC_LITERAL(10, 154, 14), // "canExportLayer"
QT_MOC_LITERAL(11, 169, 14), // "canExportImage"
QT_MOC_LITERAL(12, 184, 14), // "canRenameLayer"
QT_MOC_LITERAL(13, 199, 12), // "canEditLayer"
QT_MOC_LITERAL(14, 212, 19), // "canEditLayerTabular"
QT_MOC_LITERAL(15, 232, 15), // "canMeasureLayer"
QT_MOC_LITERAL(16, 248, 9), // "canSelect"
QT_MOC_LITERAL(17, 258, 17), // "canClearSelection"
QT_MOC_LITERAL(18, 276, 16), // "canEditSelection"
QT_MOC_LITERAL(19, 293, 18), // "canDeleteSelection"
QT_MOC_LITERAL(20, 312, 8), // "canPaste"
QT_MOC_LITERAL(21, 321, 16), // "canInsertInstant"
QT_MOC_LITERAL(22, 338, 29), // "canInsertInstantsAtBoundaries"
QT_MOC_LITERAL(23, 368, 24), // "canInsertItemAtSelection"
QT_MOC_LITERAL(24, 393, 19), // "canRenumberInstants"
QT_MOC_LITERAL(25, 413, 20), // "canSubdivideInstants"
QT_MOC_LITERAL(26, 434, 17), // "canWinnowInstants"
QT_MOC_LITERAL(27, 452, 21), // "canDeleteCurrentLayer"
QT_MOC_LITERAL(28, 474, 7), // "canZoom"
QT_MOC_LITERAL(29, 482, 9), // "canScroll"
QT_MOC_LITERAL(30, 492, 7), // "canPlay"
QT_MOC_LITERAL(31, 500, 9), // "canRecord"
QT_MOC_LITERAL(32, 510, 7), // "canFfwd"
QT_MOC_LITERAL(33, 518, 9), // "canRewind"
QT_MOC_LITERAL(34, 528, 16), // "canPlaySelection"
QT_MOC_LITERAL(35, 545, 18), // "canSpeedUpPlayback"
QT_MOC_LITERAL(36, 564, 19), // "canSlowDownPlayback"
QT_MOC_LITERAL(37, 584, 22), // "canChangePlaybackSpeed"
QT_MOC_LITERAL(38, 607, 21), // "canSelectPreviousPane"
QT_MOC_LITERAL(39, 629, 17), // "canSelectNextPane"
QT_MOC_LITERAL(40, 647, 22), // "canSelectPreviousLayer"
QT_MOC_LITERAL(41, 670, 18), // "canSelectNextLayer"
QT_MOC_LITERAL(42, 689, 7), // "canSave"
QT_MOC_LITERAL(43, 697, 9), // "canSaveAs"
QT_MOC_LITERAL(44, 707, 10), // "hideSplash"
QT_MOC_LITERAL(45, 718, 8), // "QWidget*"
QT_MOC_LITERAL(46, 727, 13), // "sessionLoaded"
QT_MOC_LITERAL(47, 741, 15), // "audioFileLoaded"
QT_MOC_LITERAL(48, 757, 16), // "replacedDocument"
QT_MOC_LITERAL(49, 774, 8), // "activity"
QT_MOC_LITERAL(50, 783, 17), // "preferenceChanged"
QT_MOC_LITERAL(51, 801, 31), // "PropertyContainer::PropertyName"
QT_MOC_LITERAL(52, 833, 17), // "resizeConstrained"
QT_MOC_LITERAL(53, 851, 15), // "recreateAudioIO"
QT_MOC_LITERAL(54, 867, 6), // "zoomIn"
QT_MOC_LITERAL(55, 874, 7), // "zoomOut"
QT_MOC_LITERAL(56, 882, 9), // "zoomToFit"
QT_MOC_LITERAL(57, 892, 11), // "zoomToRange"
QT_MOC_LITERAL(58, 904, 1), // "a"
QT_MOC_LITERAL(59, 906, 1), // "b"
QT_MOC_LITERAL(60, 908, 11), // "zoomDefault"
QT_MOC_LITERAL(61, 920, 10), // "scrollLeft"
QT_MOC_LITERAL(62, 931, 11), // "scrollRight"
QT_MOC_LITERAL(63, 943, 8), // "jumpLeft"
QT_MOC_LITERAL(64, 952, 9), // "jumpRight"
QT_MOC_LITERAL(65, 962, 8), // "peekLeft"
QT_MOC_LITERAL(66, 971, 9), // "peekRight"
QT_MOC_LITERAL(67, 981, 14), // "showNoOverlays"
QT_MOC_LITERAL(68, 996, 19), // "showMinimalOverlays"
QT_MOC_LITERAL(69, 1016, 15), // "showAllOverlays"
QT_MOC_LITERAL(70, 1032, 16), // "toggleTimeRulers"
QT_MOC_LITERAL(71, 1049, 16), // "toggleZoomWheels"
QT_MOC_LITERAL(72, 1066, 19), // "togglePropertyBoxes"
QT_MOC_LITERAL(73, 1086, 15), // "toggleStatusBar"
QT_MOC_LITERAL(74, 1102, 16), // "toggleCentreLine"
QT_MOC_LITERAL(75, 1119, 4), // "play"
QT_MOC_LITERAL(76, 1124, 4), // "ffwd"
QT_MOC_LITERAL(77, 1129, 7), // "ffwdEnd"
QT_MOC_LITERAL(78, 1137, 6), // "rewind"
QT_MOC_LITERAL(79, 1144, 11), // "rewindStart"
QT_MOC_LITERAL(80, 1156, 6), // "record"
QT_MOC_LITERAL(81, 1163, 4), // "stop"
QT_MOC_LITERAL(82, 1168, 11), // "ffwdSimilar"
QT_MOC_LITERAL(83, 1180, 13), // "rewindSimilar"
QT_MOC_LITERAL(84, 1194, 17), // "deleteCurrentPane"
QT_MOC_LITERAL(85, 1212, 18), // "deleteCurrentLayer"
QT_MOC_LITERAL(86, 1231, 16), // "editCurrentLayer"
QT_MOC_LITERAL(87, 1248, 12), // "previousPane"
QT_MOC_LITERAL(88, 1261, 8), // "nextPane"
QT_MOC_LITERAL(89, 1270, 13), // "previousLayer"
QT_MOC_LITERAL(90, 1284, 9), // "nextLayer"
QT_MOC_LITERAL(91, 1294, 15), // "playLoopToggled"
QT_MOC_LITERAL(92, 1310, 20), // "playSelectionToggled"
QT_MOC_LITERAL(93, 1331, 15), // "playSoloToggled"
QT_MOC_LITERAL(94, 1347, 26), // "audioChannelCountIncreased"
QT_MOC_LITERAL(95, 1374, 5), // "count"
QT_MOC_LITERAL(96, 1380, 18), // "sampleRateMismatch"
QT_MOC_LITERAL(97, 1399, 15), // "sv_samplerate_t"
QT_MOC_LITERAL(98, 1415, 27), // "audioOverloadPluginDisabled"
QT_MOC_LITERAL(99, 1443, 36), // "audioTimeStretchMultiChannelD..."
QT_MOC_LITERAL(100, 1480, 20), // "playbackFrameChanged"
QT_MOC_LITERAL(101, 1501, 10), // "sv_frame_t"
QT_MOC_LITERAL(102, 1512, 24), // "globalCentreFrameChanged"
QT_MOC_LITERAL(103, 1537, 22), // "viewCentreFrameChanged"
QT_MOC_LITERAL(104, 1560, 5), // "View*"
QT_MOC_LITERAL(105, 1566, 20), // "viewZoomLevelChanged"
QT_MOC_LITERAL(106, 1587, 23), // "monitoringLevelsChanged"
QT_MOC_LITERAL(107, 1611, 21), // "recordDurationChanged"
QT_MOC_LITERAL(108, 1633, 18), // "currentPaneChanged"
QT_MOC_LITERAL(109, 1652, 5), // "Pane*"
QT_MOC_LITERAL(110, 1658, 19), // "currentLayerChanged"
QT_MOC_LITERAL(111, 1678, 6), // "Layer*"
QT_MOC_LITERAL(112, 1685, 9), // "selectAll"
QT_MOC_LITERAL(113, 1695, 13), // "selectToStart"
QT_MOC_LITERAL(114, 1709, 11), // "selectToEnd"
QT_MOC_LITERAL(115, 1721, 13), // "selectVisible"
QT_MOC_LITERAL(116, 1735, 14), // "clearSelection"
QT_MOC_LITERAL(117, 1750, 3), // "cut"
QT_MOC_LITERAL(118, 1754, 4), // "copy"
QT_MOC_LITERAL(119, 1759, 5), // "paste"
QT_MOC_LITERAL(120, 1765, 23), // "pasteAtPlaybackPosition"
QT_MOC_LITERAL(121, 1789, 13), // "pasteRelative"
QT_MOC_LITERAL(122, 1803, 6), // "offset"
QT_MOC_LITERAL(123, 1810, 14), // "deleteSelected"
QT_MOC_LITERAL(124, 1825, 13), // "insertInstant"
QT_MOC_LITERAL(125, 1839, 15), // "insertInstantAt"
QT_MOC_LITERAL(126, 1855, 26), // "insertInstantsAtBoundaries"
QT_MOC_LITERAL(127, 1882, 21), // "insertItemAtSelection"
QT_MOC_LITERAL(128, 1904, 12), // "insertItemAt"
QT_MOC_LITERAL(129, 1917, 16), // "renumberInstants"
QT_MOC_LITERAL(130, 1934, 19), // "subdivideInstantsBy"
QT_MOC_LITERAL(131, 1954, 16), // "winnowInstantsBy"
QT_MOC_LITERAL(132, 1971, 16), // "documentModified"
QT_MOC_LITERAL(133, 1988, 16), // "documentRestored"
QT_MOC_LITERAL(134, 2005, 10), // "layerAdded"
QT_MOC_LITERAL(135, 2016, 12), // "layerRemoved"
QT_MOC_LITERAL(136, 2029, 21), // "layerAboutToBeDeleted"
QT_MOC_LITERAL(137, 2051, 12), // "layerInAView"
QT_MOC_LITERAL(138, 2064, 16), // "mainModelChanged"
QT_MOC_LITERAL(139, 2081, 14), // "WaveFileModel*"
QT_MOC_LITERAL(140, 2096, 10), // "modelAdded"
QT_MOC_LITERAL(141, 2107, 6), // "Model*"
QT_MOC_LITERAL(142, 2114, 21), // "modelAboutToBeDeleted"
QT_MOC_LITERAL(143, 2136, 16), // "updateMenuStates"
QT_MOC_LITERAL(144, 2153, 22), // "updateDescriptionLabel"
QT_MOC_LITERAL(145, 2176, 21), // "modelGenerationFailed"
QT_MOC_LITERAL(146, 2198, 22), // "modelGenerationWarning"
QT_MOC_LITERAL(147, 2221, 23), // "modelRegenerationFailed"
QT_MOC_LITERAL(148, 2245, 24), // "modelRegenerationWarning"
QT_MOC_LITERAL(149, 2270, 17), // "alignmentComplete"
QT_MOC_LITERAL(150, 2288, 15), // "AlignmentModel*"
QT_MOC_LITERAL(151, 2304, 15), // "alignmentFailed"
QT_MOC_LITERAL(152, 2320, 24), // "rightButtonMenuRequested"
QT_MOC_LITERAL(153, 2345, 5), // "point"
QT_MOC_LITERAL(154, 2351, 9), // "paneAdded"
QT_MOC_LITERAL(155, 2361, 10), // "paneHidden"
QT_MOC_LITERAL(156, 2372, 20), // "paneAboutToBeDeleted"
QT_MOC_LITERAL(157, 2393, 16), // "paneDropAccepted"
QT_MOC_LITERAL(158, 2410, 23), // "paneDeleteButtonClicked"
QT_MOC_LITERAL(159, 2434, 8), // "oscReady"
QT_MOC_LITERAL(160, 2443, 7), // "pollOSC"
QT_MOC_LITERAL(161, 2451, 16), // "handleOSCMessage"
QT_MOC_LITERAL(162, 2468, 10), // "OSCMessage"
QT_MOC_LITERAL(163, 2479, 18), // "contextHelpChanged"
QT_MOC_LITERAL(164, 2498, 26), // "inProgressSelectionChanged"
QT_MOC_LITERAL(165, 2525, 18), // "openSessionFromRDF"
QT_MOC_LITERAL(166, 2544, 14), // "FileOpenStatus"
QT_MOC_LITERAL(167, 2559, 10), // "FileSource"
QT_MOC_LITERAL(168, 2570, 6), // "source"
QT_MOC_LITERAL(169, 2577, 17), // "openLayersFromRDF"
QT_MOC_LITERAL(170, 2595, 12), // "closeSession"
QT_MOC_LITERAL(171, 2608, 14), // "emitHideSplash"
QT_MOC_LITERAL(172, 2623, 21), // "newerVersionAvailable"
QT_MOC_LITERAL(173, 2645, 23) // "menuActionMapperInvoked"

    },
    "MainWindowBase\0canAddPane\0\0"
    "canDeleteCurrentPane\0canAddLayer\0"
    "canImportMoreAudio\0canReplaceMainAudio\0"
    "canImportLayer\0canChangeSessionTemplate\0"
    "canExportAudio\0canExportLayer\0"
    "canExportImage\0canRenameLayer\0"
    "canEditLayer\0canEditLayerTabular\0"
    "canMeasureLayer\0canSelect\0canClearSelection\0"
    "canEditSelection\0canDeleteSelection\0"
    "canPaste\0canInsertInstant\0"
    "canInsertInstantsAtBoundaries\0"
    "canInsertItemAtSelection\0canRenumberInstants\0"
    "canSubdivideInstants\0canWinnowInstants\0"
    "canDeleteCurrentLayer\0canZoom\0canScroll\0"
    "canPlay\0canRecord\0canFfwd\0canRewind\0"
    "canPlaySelection\0canSpeedUpPlayback\0"
    "canSlowDownPlayback\0canChangePlaybackSpeed\0"
    "canSelectPreviousPane\0canSelectNextPane\0"
    "canSelectPreviousLayer\0canSelectNextLayer\0"
    "canSave\0canSaveAs\0hideSplash\0QWidget*\0"
    "sessionLoaded\0audioFileLoaded\0"
    "replacedDocument\0activity\0preferenceChanged\0"
    "PropertyContainer::PropertyName\0"
    "resizeConstrained\0recreateAudioIO\0"
    "zoomIn\0zoomOut\0zoomToFit\0zoomToRange\0"
    "a\0b\0zoomDefault\0scrollLeft\0scrollRight\0"
    "jumpLeft\0jumpRight\0peekLeft\0peekRight\0"
    "showNoOverlays\0showMinimalOverlays\0"
    "showAllOverlays\0toggleTimeRulers\0"
    "toggleZoomWheels\0togglePropertyBoxes\0"
    "toggleStatusBar\0toggleCentreLine\0play\0"
    "ffwd\0ffwdEnd\0rewind\0rewindStart\0record\0"
    "stop\0ffwdSimilar\0rewindSimilar\0"
    "deleteCurrentPane\0deleteCurrentLayer\0"
    "editCurrentLayer\0previousPane\0nextPane\0"
    "previousLayer\0nextLayer\0playLoopToggled\0"
    "playSelectionToggled\0playSoloToggled\0"
    "audioChannelCountIncreased\0count\0"
    "sampleRateMismatch\0sv_samplerate_t\0"
    "audioOverloadPluginDisabled\0"
    "audioTimeStretchMultiChannelDisabled\0"
    "playbackFrameChanged\0sv_frame_t\0"
    "globalCentreFrameChanged\0"
    "viewCentreFrameChanged\0View*\0"
    "viewZoomLevelChanged\0monitoringLevelsChanged\0"
    "recordDurationChanged\0currentPaneChanged\0"
    "Pane*\0currentLayerChanged\0Layer*\0"
    "selectAll\0selectToStart\0selectToEnd\0"
    "selectVisible\0clearSelection\0cut\0copy\0"
    "paste\0pasteAtPlaybackPosition\0"
    "pasteRelative\0offset\0deleteSelected\0"
    "insertInstant\0insertInstantAt\0"
    "insertInstantsAtBoundaries\0"
    "insertItemAtSelection\0insertItemAt\0"
    "renumberInstants\0subdivideInstantsBy\0"
    "winnowInstantsBy\0documentModified\0"
    "documentRestored\0layerAdded\0layerRemoved\0"
    "layerAboutToBeDeleted\0layerInAView\0"
    "mainModelChanged\0WaveFileModel*\0"
    "modelAdded\0Model*\0modelAboutToBeDeleted\0"
    "updateMenuStates\0updateDescriptionLabel\0"
    "modelGenerationFailed\0modelGenerationWarning\0"
    "modelRegenerationFailed\0"
    "modelRegenerationWarning\0alignmentComplete\0"
    "AlignmentModel*\0alignmentFailed\0"
    "rightButtonMenuRequested\0point\0paneAdded\0"
    "paneHidden\0paneAboutToBeDeleted\0"
    "paneDropAccepted\0paneDeleteButtonClicked\0"
    "oscReady\0pollOSC\0handleOSCMessage\0"
    "OSCMessage\0contextHelpChanged\0"
    "inProgressSelectionChanged\0"
    "openSessionFromRDF\0FileOpenStatus\0"
    "FileSource\0source\0openLayersFromRDF\0"
    "closeSession\0emitHideSplash\0"
    "newerVersionAvailable\0menuActionMapperInvoked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindowBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     155,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      48,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  789,    2, 0x06 /* Public */,
       3,    1,  792,    2, 0x06 /* Public */,
       4,    1,  795,    2, 0x06 /* Public */,
       5,    1,  798,    2, 0x06 /* Public */,
       6,    1,  801,    2, 0x06 /* Public */,
       7,    1,  804,    2, 0x06 /* Public */,
       8,    1,  807,    2, 0x06 /* Public */,
       9,    1,  810,    2, 0x06 /* Public */,
      10,    1,  813,    2, 0x06 /* Public */,
      11,    1,  816,    2, 0x06 /* Public */,
      12,    1,  819,    2, 0x06 /* Public */,
      13,    1,  822,    2, 0x06 /* Public */,
      14,    1,  825,    2, 0x06 /* Public */,
      15,    1,  828,    2, 0x06 /* Public */,
      16,    1,  831,    2, 0x06 /* Public */,
      17,    1,  834,    2, 0x06 /* Public */,
      18,    1,  837,    2, 0x06 /* Public */,
      19,    1,  840,    2, 0x06 /* Public */,
      20,    1,  843,    2, 0x06 /* Public */,
      21,    1,  846,    2, 0x06 /* Public */,
      22,    1,  849,    2, 0x06 /* Public */,
      23,    1,  852,    2, 0x06 /* Public */,
      24,    1,  855,    2, 0x06 /* Public */,
      25,    1,  858,    2, 0x06 /* Public */,
      26,    1,  861,    2, 0x06 /* Public */,
      27,    1,  864,    2, 0x06 /* Public */,
      28,    1,  867,    2, 0x06 /* Public */,
      29,    1,  870,    2, 0x06 /* Public */,
      30,    1,  873,    2, 0x06 /* Public */,
      31,    1,  876,    2, 0x06 /* Public */,
      32,    1,  879,    2, 0x06 /* Public */,
      33,    1,  882,    2, 0x06 /* Public */,
      34,    1,  885,    2, 0x06 /* Public */,
      35,    1,  888,    2, 0x06 /* Public */,
      36,    1,  891,    2, 0x06 /* Public */,
      37,    1,  894,    2, 0x06 /* Public */,
      38,    1,  897,    2, 0x06 /* Public */,
      39,    1,  900,    2, 0x06 /* Public */,
      40,    1,  903,    2, 0x06 /* Public */,
      41,    1,  906,    2, 0x06 /* Public */,
      42,    1,  909,    2, 0x06 /* Public */,
      43,    1,  912,    2, 0x06 /* Public */,
      44,    0,  915,    2, 0x06 /* Public */,
      44,    1,  916,    2, 0x06 /* Public */,
      46,    0,  919,    2, 0x06 /* Public */,
      47,    0,  920,    2, 0x06 /* Public */,
      48,    0,  921,    2, 0x06 /* Public */,
      49,    1,  922,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      50,    1,  925,    2, 0x0a /* Public */,
      52,    1,  928,    2, 0x0a /* Public */,
      53,    0,  931,    2, 0x0a /* Public */,
      54,    0,  932,    2, 0x09 /* Protected */,
      55,    0,  933,    2, 0x09 /* Protected */,
      56,    0,  934,    2, 0x09 /* Protected */,
      57,    2,  935,    2, 0x09 /* Protected */,
      60,    0,  940,    2, 0x09 /* Protected */,
      61,    0,  941,    2, 0x09 /* Protected */,
      62,    0,  942,    2, 0x09 /* Protected */,
      63,    0,  943,    2, 0x09 /* Protected */,
      64,    0,  944,    2, 0x09 /* Protected */,
      65,    0,  945,    2, 0x09 /* Protected */,
      66,    0,  946,    2, 0x09 /* Protected */,
      67,    0,  947,    2, 0x09 /* Protected */,
      68,    0,  948,    2, 0x09 /* Protected */,
      69,    0,  949,    2, 0x09 /* Protected */,
      70,    0,  950,    2, 0x09 /* Protected */,
      71,    0,  951,    2, 0x09 /* Protected */,
      72,    0,  952,    2, 0x09 /* Protected */,
      73,    0,  953,    2, 0x09 /* Protected */,
      74,    0,  954,    2, 0x09 /* Protected */,
      75,    0,  955,    2, 0x09 /* Protected */,
      76,    0,  956,    2, 0x09 /* Protected */,
      77,    0,  957,    2, 0x09 /* Protected */,
      78,    0,  958,    2, 0x09 /* Protected */,
      79,    0,  959,    2, 0x09 /* Protected */,
      80,    0,  960,    2, 0x09 /* Protected */,
      81,    0,  961,    2, 0x09 /* Protected */,
      82,    0,  962,    2, 0x09 /* Protected */,
      83,    0,  963,    2, 0x09 /* Protected */,
      84,    0,  964,    2, 0x09 /* Protected */,
      85,    0,  965,    2, 0x09 /* Protected */,
      86,    0,  966,    2, 0x09 /* Protected */,
      87,    0,  967,    2, 0x09 /* Protected */,
      88,    0,  968,    2, 0x09 /* Protected */,
      89,    0,  969,    2, 0x09 /* Protected */,
      90,    0,  970,    2, 0x09 /* Protected */,
      91,    0,  971,    2, 0x09 /* Protected */,
      92,    0,  972,    2, 0x09 /* Protected */,
      93,    0,  973,    2, 0x09 /* Protected */,
      94,    1,  974,    2, 0x09 /* Protected */,
      96,    3,  977,    2, 0x09 /* Protected */,
      98,    0,  984,    2, 0x09 /* Protected */,
      99,    0,  985,    2, 0x09 /* Protected */,
     100,    1,  986,    2, 0x09 /* Protected */,
     102,    1,  989,    2, 0x09 /* Protected */,
     103,    2,  992,    2, 0x09 /* Protected */,
     105,    3,  997,    2, 0x09 /* Protected */,
     106,    2, 1004,    2, 0x09 /* Protected */,
     107,    2, 1009,    2, 0x09 /* Protected */,
     108,    1, 1014,    2, 0x09 /* Protected */,
     110,    2, 1017,    2, 0x09 /* Protected */,
     112,    0, 1022,    2, 0x09 /* Protected */,
     113,    0, 1023,    2, 0x09 /* Protected */,
     114,    0, 1024,    2, 0x09 /* Protected */,
     115,    0, 1025,    2, 0x09 /* Protected */,
     116,    0, 1026,    2, 0x09 /* Protected */,
     117,    0, 1027,    2, 0x09 /* Protected */,
     118,    0, 1028,    2, 0x09 /* Protected */,
     119,    0, 1029,    2, 0x09 /* Protected */,
     120,    0, 1030,    2, 0x09 /* Protected */,
     121,    1, 1031,    2, 0x09 /* Protected */,
     123,    0, 1034,    2, 0x09 /* Protected */,
     124,    0, 1035,    2, 0x09 /* Protected */,
     125,    1, 1036,    2, 0x09 /* Protected */,
     126,    0, 1039,    2, 0x09 /* Protected */,
     127,    0, 1040,    2, 0x09 /* Protected */,
     128,    2, 1041,    2, 0x09 /* Protected */,
     129,    0, 1046,    2, 0x09 /* Protected */,
     130,    1, 1047,    2, 0x09 /* Protected */,
     131,    1, 1050,    2, 0x09 /* Protected */,
     132,    0, 1053,    2, 0x09 /* Protected */,
     133,    0, 1054,    2, 0x09 /* Protected */,
     134,    1, 1055,    2, 0x09 /* Protected */,
     135,    1, 1058,    2, 0x09 /* Protected */,
     136,    1, 1061,    2, 0x09 /* Protected */,
     137,    2, 1064,    2, 0x09 /* Protected */,
     138,    1, 1069,    2, 0x09 /* Protected */,
     140,    1, 1072,    2, 0x09 /* Protected */,
     142,    1, 1075,    2, 0x09 /* Protected */,
     143,    0, 1078,    2, 0x09 /* Protected */,
     144,    0, 1079,    2, 0x09 /* Protected */,
     145,    2, 1080,    2, 0x09 /* Protected */,
     146,    2, 1085,    2, 0x09 /* Protected */,
     147,    3, 1090,    2, 0x09 /* Protected */,
     148,    3, 1097,    2, 0x09 /* Protected */,
     149,    1, 1104,    2, 0x09 /* Protected */,
     151,    1, 1107,    2, 0x09 /* Protected */,
     152,    2, 1110,    2, 0x09 /* Protected */,
     154,    1, 1115,    2, 0x09 /* Protected */,
     155,    1, 1118,    2, 0x09 /* Protected */,
     156,    1, 1121,    2, 0x09 /* Protected */,
     157,    2, 1124,    2, 0x09 /* Protected */,
     157,    2, 1129,    2, 0x09 /* Protected */,
     158,    1, 1134,    2, 0x09 /* Protected */,
     159,    0, 1137,    2, 0x09 /* Protected */,
     160,    0, 1138,    2, 0x09 /* Protected */,
     161,    1, 1139,    2, 0x09 /* Protected */,
     163,    1, 1142,    2, 0x09 /* Protected */,
     164,    0, 1145,    2, 0x09 /* Protected */,
     165,    1, 1146,    2, 0x09 /* Protected */,
     169,    1, 1149,    2, 0x09 /* Protected */,
     170,    0, 1152,    2, 0x09 /* Protected */,
     171,    0, 1153,    2, 0x09 /* Protected */,
     172,    1, 1154,    2, 0x09 /* Protected */,
     173,    1, 1157,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 45,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void, QMetaType::QSize,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   58,   59,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   95,
    QMetaType::Void, 0x80000000 | 97, 0x80000000 | 97, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 101,    2,
    QMetaType::Void, 0x80000000 | 101,    2,
    QMetaType::Void, 0x80000000 | 104, 0x80000000 | 101,    2,    2,
    QMetaType::Void, 0x80000000 | 104, QMetaType::Int, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    2,    2,
    QMetaType::Void, 0x80000000 | 101, 0x80000000 | 97,    2,    2,
    QMetaType::Void, 0x80000000 | 109,    2,
    QMetaType::Void, 0x80000000 | 109, 0x80000000 | 111,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 101,  122,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 101,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 101, 0x80000000 | 101,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 111,    2,
    QMetaType::Void, 0x80000000 | 111,    2,
    QMetaType::Void, 0x80000000 | 111,    2,
    QMetaType::Void, 0x80000000 | 111, QMetaType::Bool,    2,    2,
    QMetaType::Void, 0x80000000 | 139,    2,
    QMetaType::Void, 0x80000000 | 141,    2,
    QMetaType::Void, 0x80000000 | 141,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 150,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 109, QMetaType::QPoint,    2,  153,
    QMetaType::Void, 0x80000000 | 109,    2,
    QMetaType::Void, 0x80000000 | 109,    2,
    QMetaType::Void, 0x80000000 | 109,    2,
    QMetaType::Void, 0x80000000 | 109, QMetaType::QStringList,    2,    2,
    QMetaType::Void, 0x80000000 | 109, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 109,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 162,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    0x80000000 | 166, 0x80000000 | 167,  168,
    0x80000000 | 166, 0x80000000 | 167,  168,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void MainWindowBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindowBase *_t = static_cast<MainWindowBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->canAddPane((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->canDeleteCurrentPane((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->canAddLayer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->canImportMoreAudio((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->canReplaceMainAudio((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->canImportLayer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->canChangeSessionTemplate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->canExportAudio((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->canExportLayer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->canExportImage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->canRenameLayer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->canEditLayer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->canEditLayerTabular((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->canMeasureLayer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->canSelect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->canClearSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->canEditSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->canDeleteSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->canPaste((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->canInsertInstant((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->canInsertInstantsAtBoundaries((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->canInsertItemAtSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->canRenumberInstants((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->canSubdivideInstants((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->canWinnowInstants((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->canDeleteCurrentLayer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->canZoom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->canScroll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->canPlay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->canRecord((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->canFfwd((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->canRewind((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->canPlaySelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->canSpeedUpPlayback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->canSlowDownPlayback((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->canChangePlaybackSpeed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->canSelectPreviousPane((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->canSelectNextPane((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->canSelectPreviousLayer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->canSelectNextLayer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->canSave((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->canSaveAs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->hideSplash(); break;
        case 43: _t->hideSplash((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 44: _t->sessionLoaded(); break;
        case 45: _t->audioFileLoaded(); break;
        case 46: _t->replacedDocument(); break;
        case 47: _t->activity((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 48: _t->preferenceChanged((*reinterpret_cast< PropertyContainer::PropertyName(*)>(_a[1]))); break;
        case 49: _t->resizeConstrained((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 50: _t->recreateAudioIO(); break;
        case 51: _t->zoomIn(); break;
        case 52: _t->zoomOut(); break;
        case 53: _t->zoomToFit(); break;
        case 54: _t->zoomToRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 55: _t->zoomDefault(); break;
        case 56: _t->scrollLeft(); break;
        case 57: _t->scrollRight(); break;
        case 58: _t->jumpLeft(); break;
        case 59: _t->jumpRight(); break;
        case 60: _t->peekLeft(); break;
        case 61: _t->peekRight(); break;
        case 62: _t->showNoOverlays(); break;
        case 63: _t->showMinimalOverlays(); break;
        case 64: _t->showAllOverlays(); break;
        case 65: _t->toggleTimeRulers(); break;
        case 66: _t->toggleZoomWheels(); break;
        case 67: _t->togglePropertyBoxes(); break;
        case 68: _t->toggleStatusBar(); break;
        case 69: _t->toggleCentreLine(); break;
        case 70: _t->play(); break;
        case 71: _t->ffwd(); break;
        case 72: _t->ffwdEnd(); break;
        case 73: _t->rewind(); break;
        case 74: _t->rewindStart(); break;
        case 75: _t->record(); break;
        case 76: _t->stop(); break;
        case 77: _t->ffwdSimilar(); break;
        case 78: _t->rewindSimilar(); break;
        case 79: _t->deleteCurrentPane(); break;
        case 80: _t->deleteCurrentLayer(); break;
        case 81: _t->editCurrentLayer(); break;
        case 82: _t->previousPane(); break;
        case 83: _t->nextPane(); break;
        case 84: _t->previousLayer(); break;
        case 85: _t->nextLayer(); break;
        case 86: _t->playLoopToggled(); break;
        case 87: _t->playSelectionToggled(); break;
        case 88: _t->playSoloToggled(); break;
        case 89: _t->audioChannelCountIncreased((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 90: _t->sampleRateMismatch((*reinterpret_cast< sv_samplerate_t(*)>(_a[1])),(*reinterpret_cast< sv_samplerate_t(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 91: _t->audioOverloadPluginDisabled(); break;
        case 92: _t->audioTimeStretchMultiChannelDisabled(); break;
        case 93: _t->playbackFrameChanged((*reinterpret_cast< sv_frame_t(*)>(_a[1]))); break;
        case 94: _t->globalCentreFrameChanged((*reinterpret_cast< sv_frame_t(*)>(_a[1]))); break;
        case 95: _t->viewCentreFrameChanged((*reinterpret_cast< View*(*)>(_a[1])),(*reinterpret_cast< sv_frame_t(*)>(_a[2]))); break;
        case 96: _t->viewZoomLevelChanged((*reinterpret_cast< View*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 97: _t->monitoringLevelsChanged((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 98: _t->recordDurationChanged((*reinterpret_cast< sv_frame_t(*)>(_a[1])),(*reinterpret_cast< sv_samplerate_t(*)>(_a[2]))); break;
        case 99: _t->currentPaneChanged((*reinterpret_cast< Pane*(*)>(_a[1]))); break;
        case 100: _t->currentLayerChanged((*reinterpret_cast< Pane*(*)>(_a[1])),(*reinterpret_cast< Layer*(*)>(_a[2]))); break;
        case 101: _t->selectAll(); break;
        case 102: _t->selectToStart(); break;
        case 103: _t->selectToEnd(); break;
        case 104: _t->selectVisible(); break;
        case 105: _t->clearSelection(); break;
        case 106: _t->cut(); break;
        case 107: _t->copy(); break;
        case 108: _t->paste(); break;
        case 109: _t->pasteAtPlaybackPosition(); break;
        case 110: _t->pasteRelative((*reinterpret_cast< sv_frame_t(*)>(_a[1]))); break;
        case 111: _t->deleteSelected(); break;
        case 112: _t->insertInstant(); break;
        case 113: _t->insertInstantAt((*reinterpret_cast< sv_frame_t(*)>(_a[1]))); break;
        case 114: _t->insertInstantsAtBoundaries(); break;
        case 115: _t->insertItemAtSelection(); break;
        case 116: _t->insertItemAt((*reinterpret_cast< sv_frame_t(*)>(_a[1])),(*reinterpret_cast< sv_frame_t(*)>(_a[2]))); break;
        case 117: _t->renumberInstants(); break;
        case 118: _t->subdivideInstantsBy((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 119: _t->winnowInstantsBy((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 120: _t->documentModified(); break;
        case 121: _t->documentRestored(); break;
        case 122: _t->layerAdded((*reinterpret_cast< Layer*(*)>(_a[1]))); break;
        case 123: _t->layerRemoved((*reinterpret_cast< Layer*(*)>(_a[1]))); break;
        case 124: _t->layerAboutToBeDeleted((*reinterpret_cast< Layer*(*)>(_a[1]))); break;
        case 125: _t->layerInAView((*reinterpret_cast< Layer*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 126: _t->mainModelChanged((*reinterpret_cast< WaveFileModel*(*)>(_a[1]))); break;
        case 127: _t->modelAdded((*reinterpret_cast< Model*(*)>(_a[1]))); break;
        case 128: _t->modelAboutToBeDeleted((*reinterpret_cast< Model*(*)>(_a[1]))); break;
        case 129: _t->updateMenuStates(); break;
        case 130: _t->updateDescriptionLabel(); break;
        case 131: _t->modelGenerationFailed((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 132: _t->modelGenerationWarning((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 133: _t->modelRegenerationFailed((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 134: _t->modelRegenerationWarning((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 135: _t->alignmentComplete((*reinterpret_cast< AlignmentModel*(*)>(_a[1]))); break;
        case 136: _t->alignmentFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 137: _t->rightButtonMenuRequested((*reinterpret_cast< Pane*(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 138: _t->paneAdded((*reinterpret_cast< Pane*(*)>(_a[1]))); break;
        case 139: _t->paneHidden((*reinterpret_cast< Pane*(*)>(_a[1]))); break;
        case 140: _t->paneAboutToBeDeleted((*reinterpret_cast< Pane*(*)>(_a[1]))); break;
        case 141: _t->paneDropAccepted((*reinterpret_cast< Pane*(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 142: _t->paneDropAccepted((*reinterpret_cast< Pane*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 143: _t->paneDeleteButtonClicked((*reinterpret_cast< Pane*(*)>(_a[1]))); break;
        case 144: _t->oscReady(); break;
        case 145: _t->pollOSC(); break;
        case 146: _t->handleOSCMessage((*reinterpret_cast< const OSCMessage(*)>(_a[1]))); break;
        case 147: _t->contextHelpChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 148: _t->inProgressSelectionChanged(); break;
        case 149: { FileOpenStatus _r = _t->openSessionFromRDF((*reinterpret_cast< FileSource(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< FileOpenStatus*>(_a[0]) = std::move(_r); }  break;
        case 150: { FileOpenStatus _r = _t->openLayersFromRDF((*reinterpret_cast< FileSource(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< FileOpenStatus*>(_a[0]) = std::move(_r); }  break;
        case 151: _t->closeSession(); break;
        case 152: _t->emitHideSplash(); break;
        case 153: _t->newerVersionAvailable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 154: _t->menuActionMapperInvoked((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canAddPane)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canDeleteCurrentPane)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canAddLayer)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canImportMoreAudio)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canReplaceMainAudio)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canImportLayer)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canChangeSessionTemplate)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canExportAudio)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canExportLayer)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canExportImage)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canRenameLayer)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canEditLayer)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canEditLayerTabular)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canMeasureLayer)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canSelect)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canClearSelection)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canEditSelection)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canDeleteSelection)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canPaste)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canInsertInstant)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canInsertInstantsAtBoundaries)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canInsertItemAtSelection)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canRenumberInstants)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canSubdivideInstants)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canWinnowInstants)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canDeleteCurrentLayer)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canZoom)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canScroll)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canPlay)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canRecord)) {
                *result = 29;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canFfwd)) {
                *result = 30;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canRewind)) {
                *result = 31;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canPlaySelection)) {
                *result = 32;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canSpeedUpPlayback)) {
                *result = 33;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canSlowDownPlayback)) {
                *result = 34;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canChangePlaybackSpeed)) {
                *result = 35;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canSelectPreviousPane)) {
                *result = 36;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canSelectNextPane)) {
                *result = 37;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canSelectPreviousLayer)) {
                *result = 38;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canSelectNextLayer)) {
                *result = 39;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canSave)) {
                *result = 40;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::canSaveAs)) {
                *result = 41;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::hideSplash)) {
                *result = 42;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(QWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::hideSplash)) {
                *result = 43;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::sessionLoaded)) {
                *result = 44;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::audioFileLoaded)) {
                *result = 45;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::replacedDocument)) {
                *result = 46;
                return;
            }
        }
        {
            typedef void (MainWindowBase::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowBase::activity)) {
                *result = 47;
                return;
            }
        }
    }
}

const QMetaObject MainWindowBase::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindowBase.data,
      qt_meta_data_MainWindowBase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindowBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindowBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindowBase.stringdata0))
        return static_cast<void*>(const_cast< MainWindowBase*>(this));
    if (!strcmp(_clname, "FrameTimer"))
        return static_cast< FrameTimer*>(const_cast< MainWindowBase*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindowBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 155)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 155;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 155)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 155;
    }
    return _id;
}

// SIGNAL 0
void MainWindowBase::canAddPane(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindowBase::canDeleteCurrentPane(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindowBase::canAddLayer(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindowBase::canImportMoreAudio(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindowBase::canReplaceMainAudio(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindowBase::canImportLayer(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindowBase::canChangeSessionTemplate(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindowBase::canExportAudio(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindowBase::canExportLayer(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindowBase::canExportImage(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWindowBase::canRenameLayer(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MainWindowBase::canEditLayer(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainWindowBase::canEditLayerTabular(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MainWindowBase::canMeasureLayer(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MainWindowBase::canSelect(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MainWindowBase::canClearSelection(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MainWindowBase::canEditSelection(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MainWindowBase::canDeleteSelection(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MainWindowBase::canPaste(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MainWindowBase::canInsertInstant(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MainWindowBase::canInsertInstantsAtBoundaries(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MainWindowBase::canInsertItemAtSelection(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void MainWindowBase::canRenumberInstants(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void MainWindowBase::canSubdivideInstants(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void MainWindowBase::canWinnowInstants(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void MainWindowBase::canDeleteCurrentLayer(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void MainWindowBase::canZoom(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void MainWindowBase::canScroll(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void MainWindowBase::canPlay(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void MainWindowBase::canRecord(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void MainWindowBase::canFfwd(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void MainWindowBase::canRewind(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void MainWindowBase::canPlaySelection(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void MainWindowBase::canSpeedUpPlayback(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void MainWindowBase::canSlowDownPlayback(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void MainWindowBase::canChangePlaybackSpeed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void MainWindowBase::canSelectPreviousPane(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void MainWindowBase::canSelectNextPane(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void MainWindowBase::canSelectPreviousLayer(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void MainWindowBase::canSelectNextLayer(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void MainWindowBase::canSave(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void MainWindowBase::canSaveAs(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void MainWindowBase::hideSplash()
{
    QMetaObject::activate(this, &staticMetaObject, 42, nullptr);
}

// SIGNAL 43
void MainWindowBase::hideSplash(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void MainWindowBase::sessionLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 44, nullptr);
}

// SIGNAL 45
void MainWindowBase::audioFileLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 45, nullptr);
}

// SIGNAL 46
void MainWindowBase::replacedDocument()
{
    QMetaObject::activate(this, &staticMetaObject, 46, nullptr);
}

// SIGNAL 47
void MainWindowBase::activity(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
