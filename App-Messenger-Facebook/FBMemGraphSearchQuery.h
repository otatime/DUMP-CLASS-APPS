//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMemModelObject.h"

#import "FBQueriedEntityFieldsProtocol.h"
#import "FBQueriedNodeFieldsProtocol.h"
#import "FBQueriedSearchSuggestionUnitFieldsProtocol.h"
#import "FBQueriedSearchableFieldsProtocol.h"
#import "FBSearchPivotsSource.h"

@class NSString;

@interface FBMemGraphSearchQuery : FBMemModelObject <FBSearchPivotsSource, FBQueriedNodeFieldsProtocol, FBQueriedSearchableFieldsProtocol, FBQueriedEntityFieldsProtocol, FBQueriedSearchSuggestionUnitFieldsProtocol>
{
}

- (id)filterGroups;
- (id)_filterDictionaryFromFilters:(id)arg1;
- (id)URLForVideoSearchPivot;
- (id)URLWithSourceType:(unsigned int)arg1;
- (unsigned int)resultType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

