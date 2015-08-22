//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBWebImageNetworkFetchFirstSpecifier.h"

@class NSArray, NSSet, NSString;

@interface FBWebImageNetworkSpecifier : NSObject <FBWebImageNetworkFetchFirstSpecifier>
{
    id <FBWebImageNetworkSpecifierDownloadNode> _targetNode;
    NSArray *_allInfoURLsSortedByDescImageFlag;
    NSSet *_downloadNodes;
    NSSet *_infoNodes;
    id _logicalIdentifier;
}

+ (id)type;
@property(readonly, nonatomic) id logicalIdentifier; // @synthesize logicalIdentifier=_logicalIdentifier;
@property(readonly, copy, nonatomic) NSSet *infoNodes; // @synthesize infoNodes=_infoNodes;
@property(readonly, copy, nonatomic) NSSet *downloadNodes; // @synthesize downloadNodes=_downloadNodes;
- (void).cxx_destruct;
- (id)_infoNodesFlagsDescription;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned int targetImageFlag;
- (id)infoNodeForURL:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allInfoURLsSortedByDescImageFlag; // @synthesize allInfoURLsSortedByDescImageFlag=_allInfoURLsSortedByDescImageFlag;
@property(readonly, nonatomic) id <FBWebImageNetworkSpecifierDownloadNode> targetNode; // @synthesize targetNode=_targetNode;
- (id)initWithDownloadNodes:(id)arg1 infoNodes:(id)arg2 logicalIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

