//
//  Copyright © 2013 Magical Panda Software LLC. All rights reserved.

#import "MagicalRecordStack.h"

@interface MagicalRecordStack ()

@property (readwrite, nonnull, nonatomic, strong) NSManagedObjectContext *context;
@property (readwrite, nonnull, nonatomic, strong) NSManagedObjectModel *model;
@property (readwrite, nonnull, nonatomic, strong) NSPersistentStoreCoordinator *coordinator;
@property (readwrite, nullable, nonatomic, strong) NSPersistentStore *store;

- (nonnull NSPersistentStoreCoordinator *)createCoordinator;
- (nonnull NSPersistentStoreCoordinator *)createCoordinatorWithOptions:(nullable NSDictionary *)options;

- (void)loadStack;

@end
