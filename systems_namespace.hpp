#ifndef SYSTEMS_NAMESPACE_HPP
#define SYSTEMS_NAMESPACE_HPP

#include <string>
#include <vector>

namespace Systems {

const std::string networking = "networking";
const std::string reconciliation = "networking";
const std::string physics = "physics";
const std::string asset_loading = "asset_loading";
const std::string graphics = "graphics";

const std::vector<std::string> all = {networking, reconciliation, physics, asset_loading, graphics};

} // namespace Systems

#endif // SYSTEMS_NAMESPACE_HPP
