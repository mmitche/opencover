﻿
// File generated by Wsutil Compiler version 1.0092 
#include <WebServices.h>
#include "opencover.profiler.xsd.h"
#include "opencover.profiler.wsdl.h"

typedef struct _opencover_profiler_wsdlLocalDefinitions 
{
    struct // messages
    {
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_Start_InputMessage;
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_Start_OutputMessage;
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_Stop_InputMessage;
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_Stop_OutputMessage;
    } messages; // end of messages
    struct // XML dictionary
    {
        struct // XML string list
        {
            WS_XML_STRING IProfilerCommunication_Start_InputMessageactionName;  // urn:opencover.profiler/IProfilerCommunication/Start
            WS_XML_STRING IProfilerCommunication_Start_OutputMessageactionName;  // urn:opencover.profiler/IProfilerCommunication/StartResponse
            WS_XML_STRING IProfilerCommunication_Stop_InputMessageactionName;  // urn:opencover.profiler/IProfilerCommunication/Stop
            WS_XML_STRING IProfilerCommunication_Stop_OutputMessageactionName;  // urn:opencover.profiler/IProfilerCommunication/StopResponse
        } xmlStrings; // end of XML string list
        WS_XML_DICTIONARY dict;  
    } dictionary;  // end of XML dictionary
} _opencover_profiler_wsdlLocalDefinitions;

const static _opencover_profiler_wsdlLocalDefinitions opencover_profiler_wsdlLocalDefinitions =
{
    { // messages
        {    // message description for IProfilerCommunication_Start_InputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Start_InputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/Start
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.Start, 
        },    // message description for IProfilerCommunication_Start_InputMessage
        {    // message description for IProfilerCommunication_Start_OutputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Start_OutputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/StartResponse
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.StartResponse, 
        },    // message description for IProfilerCommunication_Start_OutputMessage
        {    // message description for IProfilerCommunication_Stop_InputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Stop_InputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/Stop
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.Stop, 
        },    // message description for IProfilerCommunication_Stop_InputMessage
        {    // message description for IProfilerCommunication_Stop_OutputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Stop_OutputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/StopResponse
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.StopResponse, 
        },    // message description for IProfilerCommunication_Stop_OutputMessage
    }, // end of messages 
    {    // dictionary 
        { // xmlStrings
            WS_XML_STRING_DICTIONARY_VALUE("urn:opencover.profiler/IProfilerCommunication/Start",&opencover_profiler_wsdlLocalDefinitions.dictionary.dict, 0),
            WS_XML_STRING_DICTIONARY_VALUE("urn:opencover.profiler/IProfilerCommunication/StartResponse",&opencover_profiler_wsdlLocalDefinitions.dictionary.dict, 1),
            WS_XML_STRING_DICTIONARY_VALUE("urn:opencover.profiler/IProfilerCommunication/Stop",&opencover_profiler_wsdlLocalDefinitions.dictionary.dict, 2),
            WS_XML_STRING_DICTIONARY_VALUE("urn:opencover.profiler/IProfilerCommunication/StopResponse",&opencover_profiler_wsdlLocalDefinitions.dictionary.dict, 3),
        },  // end of xmlStrings
        
        {   // opencover_profiler_wsdldictionary
        // 45448b70-a2e9-40f5-8d9d-8eefc89884d5 
        { 0x45448b70, 0xa2e9, 0x40f5, { 0x8d, 0x9d, 0x8e,0xef, 0xc8, 0x98, 0x84, 0xd5 } },
        (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings,
        4,
        TRUE,
        },
    },   //  end of dictionary
}; //  end of opencover_profiler_wsdlLocalDefinitions

const _opencover_profiler_wsdl opencover_profiler_wsdl =
{
    {// messages
        {    // message description for IProfilerCommunication_Start_InputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Start_InputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/Start
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.Start, 
        },    // message description for IProfilerCommunication_Start_InputMessage
        {    // message description for IProfilerCommunication_Start_OutputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Start_OutputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/StartResponse
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.StartResponse, 
        },    // message description for IProfilerCommunication_Start_OutputMessage
        {    // message description for IProfilerCommunication_Stop_InputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Stop_InputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/Stop
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.Stop, 
        },    // message description for IProfilerCommunication_Stop_InputMessage
        {    // message description for IProfilerCommunication_Stop_OutputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Stop_OutputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/StopResponse
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.StopResponse, 
        },    // message description for IProfilerCommunication_Stop_OutputMessage
    }, // messages
}; // end of _opencover_profiler_wsdl