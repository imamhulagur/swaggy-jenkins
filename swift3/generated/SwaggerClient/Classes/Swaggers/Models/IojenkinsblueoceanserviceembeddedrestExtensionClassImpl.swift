//
// IojenkinsblueoceanserviceembeddedrestExtensionClassImpl.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class IojenkinsblueoceanserviceembeddedrestExtensionClassImpl: JSONEncodable {

    public var _class: String?
    public var links: IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks?
    public var classes: [String]?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["_links"] = self.links?.encodeToJSON()
        nillableDictionary["classes"] = self.classes?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
