//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopDataCommonExecutorsExecutorsModule, ComGoogleAppsBigtopDataCommonExtensionregistryExtensionRegistrarModule, ComGoogleAppsBigtopDataCommonRpcRpcModule, ComGoogleAppsBigtopDataCommonTimeTimeModule, ComGoogleAppsBigtopDataContactsContactsModule, ComGoogleAppsBigtopDataEntitiesEntitiesModule, ComGoogleAppsBigtopDataItemsChangesApplierAppliersModule, ComGoogleAppsBigtopDataItemsItemsModule, ComGoogleAppsBigtopDataItemsStorageItemsStorageModule, ComGoogleAppsBigtopDataItemsSyncServiceItemsSyncServerModule, ComGoogleAppsBigtopDataLocationaliasesLocationAliasesModule, ComGoogleAppsBigtopDataNetworkHttpUrlConnectionTransportModule, ComGoogleAppsBigtopDataNetworkIosAuthenticationModule, ComGoogleAppsBigtopDataNetworkNetworkModule, ComGoogleAppsBigtopDataSettingsSettingsModule, ComGoogleAppsXplatProtobufExtensionRegistryModule, ComGoogleAppsXplatSqlSqliteIosIosSqliteModule, ComGoogleAppsXplatTimeStopwatchModule, ComGoogleCaribouComponentsClientassignedidsClientAssignedIdsModule, JBTDataGlueModule;

@interface JBTDaggerIosBigTopDataComponent_Builder : NSObject
{
    ComGoogleCaribouComponentsClientassignedidsClientAssignedIdsModule *clientAssignedIdsModule_;
    JBTDataGlueModule *dataGlueModule_;
    ComGoogleAppsBigtopDataContactsContactsModule *contactsModule_;
    ComGoogleAppsBigtopDataEntitiesEntitiesModule *entitiesModule_;
    ComGoogleAppsBigtopDataCommonExtensionregistryExtensionRegistrarModule *extensionRegistrarModule_;
    ComGoogleAppsXplatProtobufExtensionRegistryModule *extensionRegistryModule_;
    ComGoogleAppsBigtopDataCommonExecutorsExecutorsModule *executorsModule_;
    ComGoogleAppsXplatTimeStopwatchModule *stopwatchModule_;
    ComGoogleAppsBigtopDataNetworkNetworkModule *networkModule_;
    ComGoogleAppsBigtopDataItemsItemsModule *itemsModule_;
    ComGoogleAppsBigtopDataItemsChangesApplierAppliersModule *appliersModule_;
    ComGoogleAppsBigtopDataItemsStorageItemsStorageModule *itemsStorageModule_;
    ComGoogleAppsBigtopDataCommonTimeTimeModule *timeModule_;
    ComGoogleAppsBigtopDataCommonRpcRpcModule *rpcModule_;
    ComGoogleAppsBigtopDataItemsSyncServiceItemsSyncServerModule *itemsSyncServerModule_;
    ComGoogleAppsBigtopDataLocationaliasesLocationAliasesModule *locationAliasesModule_;
    ComGoogleAppsBigtopDataSettingsSettingsModule *settingsModule_;
    ComGoogleAppsBigtopDataNetworkHttpUrlConnectionTransportModule *httpUrlConnectionTransportModule_;
    ComGoogleAppsBigtopDataNetworkIosAuthenticationModule *iosAuthenticationModule_;
    ComGoogleAppsXplatSqlSqliteIosIosSqliteModule *iosSqliteModule_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)iosSqliteModuleWithComGoogleAppsXplatSqlSqliteIosIosSqliteModule:(id)arg1;
- (id)iosAuthenticationModuleWithComGoogleAppsBigtopDataNetworkIosAuthenticationModule:(id)arg1;
- (id)httpUrlConnectionTransportModuleWithComGoogleAppsBigtopDataNetworkHttpUrlConnectionTransportModule:(id)arg1;
- (id)settingsModuleWithComGoogleAppsBigtopDataSettingsSettingsModule:(id)arg1;
- (id)locationAliasesModuleWithComGoogleAppsBigtopDataLocationaliasesLocationAliasesModule:(id)arg1;
- (id)itemsSyncServerModuleWithComGoogleAppsBigtopDataItemsSyncServiceItemsSyncServerModule:(id)arg1;
- (id)rpcModuleWithComGoogleAppsBigtopDataCommonRpcRpcModule:(id)arg1;
- (id)timeModuleWithComGoogleAppsBigtopDataCommonTimeTimeModule:(id)arg1;
- (id)itemsStorageModuleWithComGoogleAppsBigtopDataItemsStorageItemsStorageModule:(id)arg1;
- (id)appliersModuleWithComGoogleAppsBigtopDataItemsChangesApplierAppliersModule:(id)arg1;
- (id)itemsModuleWithComGoogleAppsBigtopDataItemsItemsModule:(id)arg1;
- (id)networkModuleWithComGoogleAppsBigtopDataNetworkNetworkModule:(id)arg1;
- (id)stopwatchModuleWithComGoogleAppsXplatTimeStopwatchModule:(id)arg1;
- (id)executorsModuleWithComGoogleAppsBigtopDataCommonExecutorsExecutorsModule:(id)arg1;
- (id)extensionRegistryModuleWithComGoogleAppsXplatProtobufExtensionRegistryModule:(id)arg1;
- (id)extensionRegistrarModuleWithComGoogleAppsBigtopDataCommonExtensionregistryExtensionRegistrarModule:(id)arg1;
- (id)entitiesModuleWithComGoogleAppsBigtopDataEntitiesEntitiesModule:(id)arg1;
- (id)contactsModuleWithComGoogleAppsBigtopDataContactsContactsModule:(id)arg1;
- (id)dataGlueModuleWithJBTDataGlueModule:(id)arg1;
- (id)clientAssignedIdsModuleWithComGoogleCaribouComponentsClientassignedidsClientAssignedIdsModule:(id)arg1;
- (id)build;
- (id)init;

@end
