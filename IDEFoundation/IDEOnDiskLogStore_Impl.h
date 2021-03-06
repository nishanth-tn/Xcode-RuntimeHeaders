/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEFoundation/IDEOnDiskLogStore.h>

@class NSMutableDictionary, NSOperationQueue, NSString;

@interface IDEOnDiskLogStore_Impl : IDEOnDiskLogStore
{
    NSString *_rootDirectoryPath;
    NSMutableDictionary *_cache;
    NSMutableDictionary *_cachedLogs;
    NSOperationQueue *_asyncOperations;
    BOOL _preserveOldLogs;
}

+ (void)initialize;
- (BOOL)preserveOldLogs;
- (void).cxx_destruct;
- (void)setPreserveOldLogs:(BOOL)arg1;
- (id)_pathForUniqueIdentifier:(id)arg1;
- (void)_removeAllButTheLatestLog;
- (void)_pruneLogsToLogStoreSizeLimit;
- (void)_removeLogRecord:(id)arg1 completionBlock:(id)arg2;
- (void)_moveToRootDirectoryAtPath:(id)arg1 errorBlock:(id)arg2;
- (id)addLog:(id)arg1 schemeIdentifier:(id)arg2 completionBlock:(id)arg3;
- (void)_saveLog:(id)arg1 logRecord:(id)arg2 toPath:(id)arg3 completionBlock:(id)arg4;
- (BOOL)_saveCacheWithError:(id *)arg1;
- (id)_cachePath;
- (id)initWithRootDirectoryAtPath:(id)arg1 error:(id *)arg2;

@end

