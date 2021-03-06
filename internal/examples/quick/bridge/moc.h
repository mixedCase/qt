

#pragma once

#ifndef GO_MAIN_H
#define GO_MAIN_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void QmlBridge_ConnectSendToQml(void* ptr);
void QmlBridge_DisconnectSendToQml(void* ptr);
void QmlBridge_SendToQml(void* ptr, char* source, char* action, char* data);
void QmlBridge_SendToGo(void* ptr, char* source, char* action, char* data);
void QmlBridge_RegisterToGo(void* ptr, void* object);
void QmlBridge_DeregisterToGo(void* ptr, char* objectName);
void* QmlBridge_NewQmlBridge(void* parent);
void QmlBridge_DestroyQmlBridge(void* ptr);
void QmlBridge_DestroyQmlBridgeDefault(void* ptr);
void QmlBridge_TimerEvent(void* ptr, void* event);
void QmlBridge_TimerEventDefault(void* ptr, void* event);
void QmlBridge_ChildEvent(void* ptr, void* event);
void QmlBridge_ChildEventDefault(void* ptr, void* event);
void QmlBridge_ConnectNotify(void* ptr, void* sign);
void QmlBridge_ConnectNotifyDefault(void* ptr, void* sign);
void QmlBridge_CustomEvent(void* ptr, void* event);
void QmlBridge_CustomEventDefault(void* ptr, void* event);
void QmlBridge_DeleteLater(void* ptr);
void QmlBridge_DeleteLaterDefault(void* ptr);
void QmlBridge_DisconnectNotify(void* ptr, void* sign);
void QmlBridge_DisconnectNotifyDefault(void* ptr, void* sign);
char QmlBridge_Event(void* ptr, void* e);
char QmlBridge_EventDefault(void* ptr, void* e);
char QmlBridge_EventFilter(void* ptr, void* watched, void* event);
char QmlBridge_EventFilterDefault(void* ptr, void* watched, void* event);
;
;

#ifdef __cplusplus
}
#endif

#endif