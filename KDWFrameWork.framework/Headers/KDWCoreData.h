//
//  DataModel.h
//  koudaixiang
//
//  Created by Blankwonder on 5/28/11.
//  Copyright 2011 Suixing Tech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

typedef void (^KDWDataAsyncOperationCompleteBlock)(BOOL changed);
typedef void (^KDWDataAsyncOperationBlock)(NSManagedObjectContext *context);

extern NSString* const KDWDataThreadDictionaryContextKey;

@interface KDWCoreData : NSObject {
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSPersistentStore *_persistentStore;
    NSURL *_databaseURL;
    
    NSManagedObjectContext *_defaultContext;
    
    dispatch_queue_t _asyncCoreDataOperationQueue;
}

- (id)initWithDatabasePath:(NSURL *)pathURL
               objectModel:(NSManagedObjectModel *)managedObjectModel
    automaticResetDatabase:(BOOL)automaticResetDatabase;

- (NSManagedObjectContext *)context_MainThread;

- (void)asyncOperation:(KDWDataAsyncOperationBlock)operationBlock
         completeBlock:(KDWDataAsyncOperationCompleteBlock)completeBlock;

@end

extern NSSet * KDWDataSetManagedObjectProperty(NSManagedObject *object, NSDictionary *newProperty);

static inline NSManagedObjectContext *KDWDataCurrentThreadContext()
{ return [[NSThread currentThread] threadDictionary][KDWDataThreadDictionaryContextKey]; }

extern NSArray *KDWDataFetchManagedObject(NSString *objectModelName, NSPredicate *predicate);
extern NSArray *KDWDataFetchManagedObjectSort(NSString *objectModelName, NSPredicate *predicate, NSString *sortKey, BOOL sortAscending) ;
