#ifndef SYSTEMS_NAMESPACE_HPP
#define SYSTEMS_NAMESPACE_HPP

#include <string>
#include <vector>

namespace Systems {

const std::string networking = "networking";
const std::string reconciliation = "reconciliation";
const std::string physics = "physics";
const std::string asset_loading = "asset_loading";
const std::string graphics = "graphics";
const std::string configuration = "configuration";

const std::vector<std::string> all = {networking, reconciliation, physics, asset_loading, graphics, configuration};

} // namespace Systems

#endif // SYSTEMS_NAMESPACE_HPP
